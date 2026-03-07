char __fastcall MiLogHotPatchPagesLocked(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // rbx
  unsigned int ProcessId; // eax
  unsigned int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  int v15; // [rsp+50h] [rbp-B8h] BYREF
  int v16; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  __int64 *v24; // [rsp+A8h] [rbp-60h]
  int v25; // [rsp+B0h] [rbp-58h]
  int v26; // [rsp+B4h] [rbp-54h]
  __int64 *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  int v29; // [rsp+C4h] [rbp-44h]
  int *v30; // [rsp+C8h] [rbp-40h]
  int v31; // [rsp+D0h] [rbp-38h]
  int v32; // [rsp+D4h] [rbp-34h]
  int *v33; // [rsp+D8h] [rbp-30h]
  int v34; // [rsp+E0h] [rbp-28h]
  int v35; // [rsp+E4h] [rbp-24h]
  int *v36; // [rsp+E8h] [rbp-20h]
  int v37; // [rsp+F0h] [rbp-18h]
  int v38; // [rsp+F4h] [rbp-14h]
  __int64 *v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v5 = &retaddr;
  v6 = *(_QWORD *)&qword_140C69568;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    if ( **(_DWORD **)&qword_140C69568 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000020LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v13 = ProcessId;
        v21 = &v13;
        v24 = &v17;
        v27 = &v18;
        v30 = &v14;
        v33 = &v15;
        v16 = a5;
        v36 = &v16;
        v39 = &v19;
        v22 = 4;
        v25 = 8;
        v28 = 8;
        v31 = 4;
        v34 = 4;
        v37 = 4;
        v40 = 8;
        v17 = a1;
        v18 = a2;
        v14 = a3;
        v15 = a4;
        v19 = 0x1000000LL;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&word_140038C96, 0LL, 1u, 0, 0, 9u, &v20);
      }
    }
  }
  return (char)v5;
}
