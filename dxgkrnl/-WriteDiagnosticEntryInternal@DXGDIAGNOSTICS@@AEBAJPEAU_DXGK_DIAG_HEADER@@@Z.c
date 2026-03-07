__int64 __fastcall DXGDIAGNOSTICS::WriteDiagnosticEntryInternal(DXGDIAGNOSTICS *this, struct _DXGK_DIAG_HEADER *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned int v6; // eax
  struct _DXGK_DIAG_HEADER *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // edx
  char *v10; // r13
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // r14d
  __int64 i; // rcx
  unsigned __int64 v15; // rcx
  int EventOrder; // eax
  unsigned int v17; // ecx
  int v18; // r14d
  __int64 v19; // rdx
  unsigned int v20; // eax
  void *v21; // rbx
  unsigned int v22; // r12d
  __int64 result; // rax
  char *v24; // r14
  __int64 v25; // rax
  int DiagnosticsInternal; // ebx
  unsigned int v27; // r8d
  int v28; // r9d
  unsigned int v29; // ebx
  int IsPersistentPacket; // r9d
  int v31; // r8d
  unsigned int v32; // edx
  int v33; // [rsp+30h] [rbp-89h]
  unsigned int v34; // [rsp+34h] [rbp-85h]
  unsigned __int8 v35[16]; // [rsp+38h] [rbp-81h] BYREF
  __int128 v36; // [rsp+48h] [rbp-71h]
  __m128i v37; // [rsp+58h] [rbp-61h]
  _OWORD v38[3]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v39; // [rsp+98h] [rbp-21h]
  _DWORD v40[2]; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-11h]
  __int128 v42; // [rsp+B0h] [rbp-9h]
  __m128i v43; // [rsp+C0h] [rbp+7h]

  v39 = 0LL;
  memset(v38, 0, sizeof(v38));
  if ( !a2 )
    return 2147483653LL;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 4);
  if ( v4 >= v5 || v4 < 0x30 )
    return 2147483653LL;
  v6 = *((_DWORD *)this + 9);
  v7 = a2;
  v8 = *((_DWORD *)this + 8);
  v9 = v6 + v5;
  if ( v8 <= v6 )
    v9 = *((_DWORD *)this + 9);
  v10 = 0LL;
  v33 = 0;
  v34 = v9;
  v11 = 0;
  v12 = (unsigned __int64)this;
  while ( *(_DWORD *)a2 != *(_DWORD *)v12 )
  {
    ++v11;
    v12 += 16LL;
    if ( v11 )
      goto LABEL_9;
  }
  v24 = (char *)this + 16 * v11;
  v33 = 1;
  v10 = v24;
  v12 = *((_QWORD *)v24 + 1);
  if ( v12
    && v4 == *(_DWORD *)(v12 + 4)
    && RtlCompareMemory((char *)a2 + 48, (const void *)(v12 + 48), v4 - 48) == v4 - 48 )
  {
    v7 = (struct _DXGK_DIAG_HEADER *)v38;
    v33 = 0;
    *((_QWORD *)&v38[0] + 1) = *((_QWORD *)a2 + 1);
    v25 = *((_QWORD *)v24 + 1);
    *(_QWORD *)&v38[0] = 0x380000001CLL;
    LODWORD(v39) = *(_DWORD *)(v25 + 40);
  }
LABEL_9:
  v13 = v34;
  for ( i = *((_DWORD *)v7 + 1) + v34 - v8; ; i = v13 + *((_DWORD *)v7 + 1) - v8 )
  {
    v15 = i + 48;
    if ( v15 < *((unsigned int *)this + 4) )
    {
      *((_DWORD *)v7 + 10) = (*((_DWORD *)this + 10))++;
      EventOrder = WdLogGetEventOrder(v15, v12);
      v17 = *((_DWORD *)v7 + 1);
      v18 = 0;
      *((_DWORD *)v7 + 11) = EventOrder;
      v19 = *((unsigned int *)this + 9);
      v20 = *((_DWORD *)this + 4);
      v21 = (void *)(v19 + *((_QWORD *)this + 7));
      v22 = v19 + v17;
      if ( (unsigned int)v19 + v17 > v20 )
      {
        memmove((void *)(v19 + *((_QWORD *)this + 7)), v7, v20 - (unsigned int)v19);
        memmove(
          *((void **)this + 7),
          (char *)v7 + (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 9)),
          v22 - *((_DWORD *)this + 4));
        v18 = 1;
      }
      else
      {
        memmove(v21, v7, v17);
      }
      *((_DWORD *)this + 9) = v22 % *((_DWORD *)this + 4);
      if ( v33 )
      {
        if ( !v18 )
          *((_QWORD *)v10 + 1) = v21;
      }
      WriteDxgDiagnosticsEvent(a2);
      return 0LL;
    }
    *(_OWORD *)v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v35, 0LL);
    if ( DiagnosticsInternal < 0 )
    {
      WdLogSingleEntry3(3LL, v8, v7, *((unsigned int *)v7 + 1));
      *((_DWORD *)this + 9) = 0;
      result = (unsigned int)DiagnosticsInternal;
      *((_DWORD *)this + 8) = 0;
      return result;
    }
    if ( *((_QWORD *)v7 + 1) - *(_QWORD *)&v35[8] < *((_QWORD *)this + 3)
      && !(unsigned int)DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(this) )
    {
      v8 = *((_DWORD *)this + 8);
      v13 = *((_DWORD *)this + 9);
      continue;
    }
    if ( (unsigned int)DXGDIAGNOSTICS::IsPersistentPacket(
                         this,
                         (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 7) + *((unsigned int *)this + 8))) )
      break;
    v12 = (v28 + *(_DWORD *)&v35[4]) % v27;
    v8 += *(_DWORD *)&v35[4];
    *((_DWORD *)this + 8) = v12;
  }
  v41 = *(_QWORD *)&v35[8];
  v40[1] = v8 + v27 - v13;
  v40[0] = 27;
  v42 = v36;
  v43 = v37;
  v43.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8)) - 1;
  DXGDIAGNOSTICS::CopyToBuffer(this, (struct _DXGK_DIAG_HEADER *)v40, 1);
  v29 = *((_DWORD *)this + 8);
  while ( (int)DXGDIAGNOSTICS::ReadDiagnosticsInternal(this, 0xFFFFFFFF, 0x30u, v35, 0LL) >= 0 )
  {
    IsPersistentPacket = DXGDIAGNOSTICS::IsPersistentPacket(
                           this,
                           (struct _DXGK_DIAG_HEADER *)(*((_QWORD *)this + 7) + *((unsigned int *)this + 8)));
    v32 = (unsigned int)(v31 + *(_DWORD *)&v35[4]) % *((_DWORD *)this + 4);
    *((_DWORD *)this + 8) = v32;
    if ( !IsPersistentPacket )
      v32 = v29;
    v29 = v32;
    if ( !IsPersistentPacket )
      goto LABEL_35;
  }
  WdLogSingleEntry3(3LL, v8, v7, *((unsigned int *)v7 + 1));
LABEL_35:
  *((_DWORD *)this + 9) = v29;
  return 3221226029LL;
}
