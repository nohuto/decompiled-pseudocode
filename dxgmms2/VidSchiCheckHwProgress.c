__int64 __fastcall VidSchiCheckHwProgress(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  unsigned int v5; // ebp
  LARGE_INTEGER v6; // r9
  unsigned __int64 v7; // r15
  unsigned int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  struct _VIDSCH_NODE **v13; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  _BYTE *v18; // r8
  _BYTE *v19; // r9
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  char v22; // al
  _BYTE *v23; // rax
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+88h] [rbp+10h] BYREF
  union _ULARGE_INTEGER v28; // [rsp+90h] [rbp+18h] BYREF
  union _LARGE_INTEGER v29; // [rsp+98h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 6628) == 0;
  *a2 = 0;
  if ( v2 )
  {
    v5 = 0;
    v29.QuadPart = 0LL;
    v6 = KeQueryPerformanceCounter(&v29);
    v27 = ((unsigned __int64)v6.QuadPart * (unsigned __int128)0x989680uLL) >> 64;
    if ( is_mul_ok(v6.QuadPart, 0x989680uLL) )
    {
      if ( v29.QuadPart == 10000000 )
        v7 = 10000000 * v6.QuadPart / 0x989680uLL;
      else
        v7 = (unsigned __int64)(10000000 * v6.QuadPart) / v29.QuadPart;
    }
    else
    {
      v7 = 10000000 * (v6.QuadPart / (unsigned __int64)v29.QuadPart)
         + 10000000 * (v6.QuadPart % (unsigned __int64)v29.QuadPart) / v29.QuadPart;
    }
    if ( *(_BYTE *)(a1 + 3152) && v7 >= *(_QWORD *)(a1 + 3136) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 3096))(*(_QWORD *)(a1 + 16), MEMORY[0xFFFFF78000000320]);
    v8 = 0;
    for ( *a2 = 0; v8 < *(_DWORD *)(a1 + 80); ++v8 )
    {
      v9 = *(__int64 **)(a1 + 632);
      if ( v8 < *(_DWORD *)(a1 + 704) )
        v9 += v8;
      v10 = *v9;
      v11 = *(_QWORD *)(*v9 + 128);
      if ( v11 && v11 <= v7 )
      {
        if ( VidSchiNeedToForcePreemptNode(*v9) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 732));
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 2896));
          VidSchiSubmitPreemptionCommand(v10);
        }
        else
        {
          *a2 = 1;
        }
        *(_QWORD *)(v10 + 128) = 0LL;
      }
    }
    if ( VidSchiCheckTimeoutForced(a1) )
    {
      VidSchiReportHwHang(a1, MEMORY[0xFFFFF78000000320], 1, 0LL);
    }
    else if ( !VidSchIsTDRPending(a1) )
    {
      v12 = 0;
      v28.QuadPart = 0LL;
      if ( *(_DWORD *)(a1 + 80) )
      {
        while ( 1 )
        {
          v13 = *(struct _VIDSCH_NODE ***)(a1 + 632);
          if ( v12 < *(_DWORD *)(a1 + 704) )
            v13 += v12;
          if ( (unsigned int)VidSchiCheckNodeTimeout(*v13) )
            break;
          if ( ++v12 >= *(_DWORD *)(a1 + 80) )
            goto LABEL_18;
        }
        v15 = *(__int64 **)(a1 + 632);
        if ( v12 < *(_DWORD *)(a1 + 704) )
          v15 += v12;
        v16 = *v15;
        v17 = 0;
        v24 = 0LL;
        if ( *(_DWORD *)(v16 + 2032) )
        {
          LOBYTE(v17) = *(_BYTE *)(v16 + 2025) != 0;
          v17 += 10;
        }
        else if ( !(unsigned __int8)VidSchiPrepareToResetEngine(v16, &v24)
               || !(unsigned __int8)VidSchiResetEngines(v16, v24) )
        {
          v17 = 9;
        }
        *(_BYTE *)(v16 + 2025) = 0;
        v18 = (_BYTE *)(v16 + 2036);
        *(_DWORD *)(v16 + 2028) = 0;
        *(_BYTE *)(v16 + 2026) = 0;
        *(_DWORD *)(v16 + 2032) = 0;
        if ( *(_BYTE *)(v16 + 2036) )
        {
          v19 = (_BYTE *)(a1 + 3037);
          if ( v16 == -2036 )
            goto LABEL_49;
          v20 = 15LL;
          v21 = (_BYTE *)(a1 + 3037);
          do
          {
            if ( v20 == -2147483631 )
              break;
            v22 = v21[v18 - v19];
            if ( !v22 )
              break;
            *v21++ = v22;
            --v20;
          }
          while ( v20 );
          v23 = v21 - 1;
          if ( v20 )
            v23 = v21;
          *v23 = 0;
          if ( !v20 )
LABEL_49:
            *v19 = 0;
          *v18 = 0;
        }
        if ( v17 && !VidSchIsTDRPending(a1) && !(unsigned int)VidSchiReportHwHang(a1, v28.QuadPart, v17, v16) )
          VidSchResetGPUTimeout(a1);
      }
LABEL_18:
      v26 = 0;
      LODWORD(v27) = 0;
      v25 = 0LL;
      if ( (unsigned int)VidSchiCheckFlipQueueTimeout((KSPIN_LOCK *)a1, (int *)&v27, &v25, &v28, &v26)
        && !(unsigned int)VidSchiReportHwHang(a1, v28.QuadPart, 3, (__int64)&v26) )
      {
        VidSchResetFlipQueueTimeout(a1);
      }
    }
    if ( !VidSchIsTDRPending(a1) )
      return 1;
    return v5;
  }
  else
  {
    *(_BYTE *)(a1 + 3152) = 0;
    return 1LL;
  }
}
