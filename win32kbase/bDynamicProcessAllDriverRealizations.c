__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v3; // cf
  __int64 v5; // rdi
  unsigned int v6; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // r15d
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 *v21; // r10
  __int64 v22; // r14
  unsigned __int64 v23; // rsi
  void (__fastcall *v24)(__int64); // rsi
  unsigned int v25; // ebx
  __int64 v26; // rcx
  signed __int32 v27; // edx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31[11]; // [rsp+50h] [rbp-58h] BYREF
  char v32; // [rsp+B0h] [rbp+8h]
  __int64 v33; // [rsp+B8h] [rbp+10h]
  __int64 v35; // [rsp+C8h] [rbp+20h] BYREF

  v31[0] = a1;
  v3 = _bittest((const signed __int32 *)(a1 + 2096), 0x10u);
  v35 = 0LL;
  v5 = a1;
  v6 = 1;
  if ( !v3 || !a2 || (v32 = 1, !_bittest((const signed __int32 *)(a2 + 2096), 0x10u)) )
    v32 = 0;
  v7 = 0;
LABEL_4:
  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v33 = v8;
LABEL_5:
  v9 = *(_QWORD *)(v8 + 8008);
  while ( ++v7 < *(_DWORD *)v9 )
  {
    v10 = *(_QWORD *)(v9 + 16);
    v11 = *(_DWORD *)(v10 + 2056);
    v12 = v11 + ((*(unsigned __int16 *)(v10 + 2) + 0xFFFF) << 16);
    if ( v7 < v12 )
    {
      if ( v7 >= v11 )
        v13 = ((v7 - v11) >> 16) + 1;
      else
        v13 = 0LL;
      v14 = *(_QWORD *)(v10 + 8 * v13 + 8);
      if ( (_DWORD)v13 )
        v15 = v7 + ((1 - (_DWORD)v13) << 16) - v11;
      else
        v15 = v7;
      v16 = 0LL;
      if ( v15 < *(_DWORD *)(v14 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v15 >> 8))
                     + 16LL * (unsigned __int8)v15
                     + 8) )
      {
        v16 = *(_QWORD *)v14 + 24LL * v15;
      }
      if ( v16 )
      {
        if ( !v7 )
          break;
        v8 = v33;
        if ( *(_BYTE *)(v16 + 14) != 5 )
          goto LABEL_5;
        v17 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v9, v7);
        v18 = v17;
        if ( v17 >= v12 )
          goto LABEL_48;
        if ( v17 >= v11 )
          v19 = ((v17 - v11) >> 16) + 1;
        else
          v19 = 0;
        v20 = *(_QWORD *)(v10 + 8LL * v19 + 8);
        if ( v19 )
          v18 = ((1 - v19) << 16) - v11 + v17;
        if ( (unsigned int)v18 >= *(_DWORD *)(v20 + 20) )
LABEL_48:
          v21 = 0LL;
        else
          v21 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
        if ( (*(_BYTE *)(v16 + 15) & 0x40) != 0 )
        {
          v8 = v33;
          if ( !*((_WORD *)v21 + 6) )
            goto LABEL_5;
          v8 = v33;
          if ( (struct _KTHREAD *)v21[2] != KeGetCurrentThread() )
            goto LABEL_5;
        }
        v22 = *v21;
        a1 = (unsigned __int16)v7;
        v23 = (unsigned __int16)v7 | (unsigned __int64)(*(unsigned __int16 *)(v16 + 12) << 16);
        if ( (_DWORD)v23 != (unsigned int)*v21 )
        {
          SGDGetSessionState((unsigned __int16)v7);
          DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 47LL, v16, v22, v23, 0LL, 0LL, 0);
          v8 = v33;
          goto LABEL_5;
        }
        v8 = v33;
        if ( !v23 )
          goto LABEL_5;
        if ( v21[6] == v5
          && (v21[14] & 0x800000) != 0
          && !v21[70]
          && v21[5]
          && (a3 || (*((_DWORD *)v21 + 29) & 1) == 0)
          && (!v32 || (*((_DWORD *)v21 + 29) & 4) == 0) )
        {
          a1 = (unsigned int)-(pProcessDfbSurfaces2((struct OBJECT *)v21, a2) != 0);
          v6 &= a1;
        }
        goto LABEL_4;
      }
    }
  }
  vDynamicConvertNewSurfaceDCs(v5, 0LL);
  if ( v6 )
  {
    v24 = *(void (__fastcall **)(__int64))(v31[0] + 3008);
    if ( v24 )
    {
      if ( _bittest((const signed __int32 *)(v5 + 40), 0x17u) )
        v29 = *(_QWORD *)(*(_QWORD *)(v5 + 3496) + 1520LL);
      else
        v29 = *(_QWORD *)(v5 + 1520);
      while ( v29 )
      {
        v24(v29);
        *(_QWORD *)(v29 + 48) = 0LL;
        v29 = *(_QWORD *)(v29 + 672);
      }
      if ( _bittest((const signed __int32 *)(v5 + 40), 0x17u) )
        v30 = *(_QWORD *)(*(_QWORD *)(v5 + 3496) + 1512LL);
      else
        v30 = *(_QWORD *)(v5 + 1512);
      while ( v30 )
      {
        v24(v30);
        *(_QWORD *)(v30 + 48) = 0LL;
        v30 = *(_QWORD *)(v30 + 672);
      }
    }
    v25 = 0;
    while ( 1 )
    {
      v25 = HmgSafeNextObjt(v25, 16, &v35);
      if ( !v25 )
        break;
      *(_DWORD *)(v35 + 112) = -1;
      v27 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v26) + 24) + 744LL));
      *(_DWORD *)(v35 + 44) = v27;
    }
    if ( *(_QWORD *)(v5 + 1504) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 && qword_1C02D5C60 )
      qword_1C02D5C60(v31);
  }
  return v6;
}
