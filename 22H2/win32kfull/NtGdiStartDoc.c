/*
 * XREFs of NtGdiStartDoc @ 0x1C01399A0
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1C0139F80 (ULongLongMult.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C013A088 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, ULONG64 a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // rdi
  unsigned int started; // r12d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  const WCHAR *v12; // rax
  ULONGLONG v13; // rdi
  const void *v14; // rdx
  LPCWSTR lpszDocName; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  ULONGLONG v18; // r10
  const WCHAR *v19; // rax
  ULONGLONG v20; // rdi
  LPCWSTR lpszOutput; // rsi
  __int64 v22; // r9
  const WCHAR *v23; // rax
  ULONGLONG v24; // rdi
  LPCWSTR lpszDatatype; // rsi
  int v27; // [rsp+20h] [rbp-88h]
  int v28; // [rsp+24h] [rbp-84h] BYREF
  int v29; // [rsp+28h] [rbp-80h]
  ULONGLONG pullResult; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-70h]
  _DOCINFOW v32; // [rsp+40h] [rbp-68h] BYREF

  v4 = a3;
  started = 0;
  v28 = 0;
  memset(&v32, 0, sizeof(v32));
  pullResult = 0LL;
  v27 = 1;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v29 = *(_DWORD *)a2;
    v32.cbSize = v29;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = *(_QWORD *)(a2 + 24);
    if ( v6 )
    {
      if ( (v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = MmUserProbeAddress;
      if ( v6 + 2 > MmUserProbeAddress || v6 + 2 < v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v9 = -1LL;
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v6 + 2 * v10) );
      if ( v10 + 1 >= v10 )
      {
        v31 = v10 + 1;
        if ( ULongLongMult(v10 + 1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( (_DWORD)pullResult )
            v12 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v11);
          else
            v12 = 0LL;
          v32.lpszDocName = v12;
        }
      }
      if ( v32.lpszDocName )
      {
        if ( pullResult && (v6 + pullResult > MmUserProbeAddress || v6 + pullResult < v6) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v13 = pullResult;
        v14 = (const void *)v6;
        lpszDocName = v32.lpszDocName;
        memmove((void *)v32.lpszDocName, v14, pullResult);
        if ( v13 >= 2 )
          lpszDocName[(v13 >> 1) - 1] = 0;
      }
      else
      {
        v27 = 0;
      }
    }
    else
    {
      v9 = -1LL;
    }
    if ( v7 )
    {
      if ( (v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = MmUserProbeAddress;
      if ( v7 + 2 > MmUserProbeAddress || v7 + 2 < v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)(v7 + 2 * v16) );
      if ( v16 + 1 >= v16 )
      {
        v31 = v16 + 1;
        if ( ULongLongMult(v16 + 1, 2uLL, &pullResult) >= 0 && pullResult <= v18 )
        {
          if ( (_DWORD)pullResult )
            v19 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v17);
          else
            v19 = 0LL;
          v32.lpszOutput = v19;
        }
      }
      if ( v32.lpszOutput )
      {
        if ( pullResult && (v7 + pullResult > MmUserProbeAddress || v7 + pullResult < v7) )
          *(_BYTE *)MmUserProbeAddress = 0;
        v20 = pullResult;
        lpszOutput = v32.lpszOutput;
        memmove((void *)v32.lpszOutput, (const void *)v7, pullResult);
        if ( v20 >= 2 )
          lpszOutput[(v20 >> 1) - 1] = 0;
      }
      else
      {
        v27 = 0;
      }
    }
    if ( (unsigned __int64)v29 >= 0x28 && v8 )
    {
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = MmUserProbeAddress;
      if ( v8 + 2 > MmUserProbeAddress || v8 + 2 < v8 )
        *(_BYTE *)MmUserProbeAddress = 0;
      do
        ++v9;
      while ( *(_WORD *)(v8 + 2 * v9) );
      if ( v9 + 1 >= v9 )
      {
        v31 = v9 + 1;
        if ( ULongLongMult(v9 + 1, 2uLL, &pullResult) >= 0 && pullResult <= 0xFFFFFFFF )
        {
          if ( pullResult && (pullResult + v8 > MmUserProbeAddress || pullResult + v8 < v8) )
            *(_BYTE *)MmUserProbeAddress = 0;
          if ( (_DWORD)pullResult )
            v23 = (const WCHAR *)AllocThreadBufferWithTag((unsigned int)pullResult, 1886221383LL, 0LL, v22);
          else
            v23 = 0LL;
          v32.lpszDatatype = v23;
        }
      }
      if ( v32.lpszDatatype )
      {
        v24 = pullResult;
        lpszDatatype = v32.lpszDatatype;
        memmove((void *)v32.lpszDatatype, (const void *)v8, pullResult);
        if ( v24 >= 2 )
          lpszDatatype[(v24 >> 1) - 1] = 0;
      }
      else
      {
        v27 = 0;
      }
      v4 = a3;
    }
    else
    {
      v4 = a3;
    }
  }
  if ( v27 )
  {
    started = GreStartDocInternal(a1, &v32, &v28, a4);
    if ( started )
    {
      a2 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v28;
    }
  }
  if ( v32.lpszDocName )
    FreeThreadBufferWithTag(v32.lpszDocName, a2);
  if ( v32.lpszOutput )
    FreeThreadBufferWithTag(v32.lpszOutput, a2);
  if ( v32.lpszDatatype )
    FreeThreadBufferWithTag(v32.lpszDatatype, a2);
  return started;
}
