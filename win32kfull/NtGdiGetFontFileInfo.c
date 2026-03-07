__int64 __fastcall NtGdiGetFontFileInfo(unsigned int a1, unsigned int a2, wchar_t *a3, SIZE_T a4, ULONG64 a5)
{
  __int64 v7; // rsi
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  struct PFT *v13; // rcx
  struct PFF *PFFFromId; // rbx
  __int64 v16; // r14
  const wchar_t *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rax
  unsigned int v20; // r9d
  _BYTE *v21; // rdx
  SIZE_T v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+40h] [rbp-28h]

  v7 = a2;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v24);
  v10 = Gre::Base::Globals(v9);
  v23 = *((_QWORD *)v10 + 6);
  GreAcquireSemaphore(v23);
  v12 = SGDGetSessionState(v11);
  PFFFromId = GetPFFFromId(*(struct PFT **)(*(_QWORD *)(v12 + 32) + 20272LL), a1, 0LL);
  if ( !PFFFromId )
  {
    v13 = (struct PFT *)*((_QWORD *)v10 + 796);
    if ( v13 )
      PFFFromId = GetPFFFromId(v13, a1, 0LL);
  }
  if ( !PFFFromId )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v23);
LABEL_6:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
    return 87LL;
  }
  v24[0] = PFFFromId;
  Gre::Base::Globals(v13);
  ++*((_DWORD *)PFFFromId + 17);
  v25 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  if ( (unsigned int)v7 >= *((_DWORD *)PFFFromId + 9) )
    goto LABEL_6;
  _mm_lfence();
  v16 = *(_QWORD *)(*((_QWORD *)PFFFromId + 25) + 8 * v7);
  v17 = &word_1C03142AC;
  if ( *(_QWORD *)(v16 + 80) )
    v17 = *(const wchar_t **)(v16 + 80);
  v18 = 0;
  v19 = -1LL;
  do
    ++v19;
  while ( v17[v19] );
  v20 = 2 * v19 + 18;
  if ( a5 )
  {
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v21 = (_BYTE *)MmUserProbeAddress;
    *v21 = *v21;
    v21[7] = v21[7];
    v22 = v20;
    *(_QWORD *)a5 = v20;
    v18 = 0;
  }
  else
  {
    v22 = v20;
  }
  if ( a3 && a4 >= v22 )
  {
    ProbeForWrite(a3, v22, 8u);
    *(_DWORD *)a3 = *(_DWORD *)v16;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v16 + 4);
    *((_QWORD *)a3 + 1) = *(unsigned int *)(v16 + 24);
    wcscpy_s(a3 + 8, (a4 - 16) >> 1, v17);
  }
  else
  {
    v18 = 122;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v24);
  return v18;
}
