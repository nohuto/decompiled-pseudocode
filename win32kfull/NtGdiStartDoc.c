/*
 * XREFs of NtGdiStartDoc @ 0x1C027B370
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ULongLongMult @ 0x1C014D830 (ULongLongMult.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278BE8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiStartDoc(ULONG64 a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  void *v10; // rax
  ULONGLONG v11; // rdi
  const void *v12; // rdx
  _WORD *v13; // rsi
  unsigned __int64 v14; // rax
  void *v15; // rax
  ULONGLONG v16; // rdi
  _WORD *v17; // rsi
  void *v18; // rax
  ULONGLONG v19; // rdi
  _WORD *v20; // rsi
  unsigned int started; // edi
  __int64 v22; // rax
  int v24; // [rsp+20h] [rbp-C8h]
  ULONGLONG pullResult; // [rsp+30h] [rbp-B8h] BYREF
  int v26; // [rsp+38h] [rbp-B0h]
  int v27; // [rsp+3Ch] [rbp-ACh] BYREF
  __int64 v28; // [rsp+40h] [rbp-A8h] BYREF
  void *v29[2]; // [rsp+48h] [rbp-A0h]
  void *v30; // [rsp+58h] [rbp-90h]
  __int64 v31; // [rsp+60h] [rbp-88h]
  int v32; // [rsp+68h] [rbp-80h]
  unsigned __int64 v33; // [rsp+70h] [rbp-78h]
  _BYTE v34[112]; // [rsp+78h] [rbp-70h] BYREF
  HDC v35; // [rsp+F0h] [rbp+8h]

  v35 = (HDC)a1;
  v4 = a3;
  v27 = 0;
  v28 = 0LL;
  v31 = 0LL;
  pullResult = 0LL;
  v26 = 1;
  *(_OWORD *)v29 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    a1 = MmUserProbeAddress;
    v32 = *(_DWORD *)a2;
    LODWORD(v28) = v32;
    v5 = *(_QWORD *)(a2 + 8);
    v6 = *(_QWORD *)(a2 + 16);
    v7 = *(_QWORD *)(a2 + 24);
    if ( v5 )
    {
      if ( (v5 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v5 + 2 > MmUserProbeAddress || v5 + 2 < v5 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v8 = -1LL;
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)(v5 + 2 * v9) );
      a1 = v9 + 1;
      if ( v9 + 1 >= v9 )
      {
        v33 = v9 + 1;
        if ( ULongLongMult(a1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( (_DWORD)pullResult )
            v10 = (void *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v10 = 0LL;
          v29[0] = v10;
        }
      }
      if ( v29[0] )
      {
        if ( pullResult && (v5 + pullResult > MmUserProbeAddress || v5 + pullResult < v5) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v11 = pullResult;
        v12 = (const void *)v5;
        v13 = v29[0];
        memmove(v29[0], v12, pullResult);
        if ( v11 >= 2 )
          v13[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v26 = 0;
      }
    }
    else
    {
      v8 = -1LL;
    }
    if ( v6 )
    {
      if ( (v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v6 + 2 > MmUserProbeAddress || v6 + 2 < v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)(v6 + 2 * v14) );
      a1 = v14 + 1;
      if ( v14 + 1 >= v14 )
      {
        v33 = v14 + 1;
        if ( ULongLongMult(a1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( (_DWORD)pullResult )
            v15 = (void *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v15 = 0LL;
          v29[1] = v15;
        }
      }
      if ( v29[1] )
      {
        if ( pullResult && (v6 + pullResult > MmUserProbeAddress || v6 + pullResult < v6) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v16 = pullResult;
        v17 = v29[1];
        memmove(v29[1], (const void *)v6, pullResult);
        if ( v16 >= 2 )
          v17[(v16 >> 1) - 1] = 0;
      }
      else
      {
        v26 = 0;
      }
    }
    if ( (unsigned __int64)v32 >= 0x28 && v7 )
    {
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v7 + 2 > MmUserProbeAddress || v7 + 2 < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      do
        ++v8;
      while ( *(_WORD *)(v7 + 2 * v8) );
      a1 = v8 + 1;
      if ( v8 + 1 >= v8 )
      {
        v33 = v8 + 1;
        if ( ULongLongMult(a1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( pullResult )
          {
            a1 = v7 + pullResult;
            if ( v7 + pullResult > MmUserProbeAddress || a1 < v7 )
              *(_BYTE *)MmUserProbeAddress = 0;
          }
          if ( (_DWORD)pullResult )
            v18 = (void *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL);
          else
            v18 = 0LL;
          v30 = v18;
        }
      }
      if ( v30 )
      {
        v19 = pullResult;
        v20 = v30;
        memmove(v30, (const void *)v7, pullResult);
        if ( v19 >= 2 )
          v20[(v19 >> 1) - 1] = 0;
      }
      else
      {
        v26 = 0;
      }
      started = 0;
      v4 = a3;
    }
    else
    {
      v4 = a3;
      started = 0;
    }
  }
  else
  {
    started = 0;
  }
  if ( v26 )
  {
    v22 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v34, *(struct Gre::Full::SESSION_GLOBALS **)(v22 + 32));
    started = GreStartDocInternal(v35, (__int64)&v28, &v27, a4, v24);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v27;
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
  }
  if ( v29[0] )
    FreeThreadBufferWithTag(v29[0]);
  if ( v29[1] )
    FreeThreadBufferWithTag(v29[1]);
  if ( v30 )
    FreeThreadBufferWithTag(v30);
  return started;
}
