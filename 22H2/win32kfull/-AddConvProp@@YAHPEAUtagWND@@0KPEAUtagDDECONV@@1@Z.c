/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F9620
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01F9A90 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v13; // [rsp+20h] [rbp-18h] BYREF
  struct tagDDECONV *Prop; // [rsp+28h] [rbp-10h]

  v13 = (char *)a4 + 24;
  Prop = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL, (__int64)a4);
  HMAssignmentLock(&v13, 0LL);
  Prop = a1;
  v13 = (char *)a4 + 40;
  HMAssignmentLock(&v13, 0LL);
  Prop = a2;
  v13 = (char *)a4 + 48;
  HMAssignmentLock(&v13, 0LL);
  v13 = (char *)a4 + 32;
  Prop = a5;
  HMAssignmentLock(&v13, 0LL);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  v10 = (unsigned __int16)atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) == 0 )
    a2 = a1;
  v11 = GetProp((__int64)a2, v10, 1LL, v9);
  if ( v11 )
    ++*(_WORD *)(v11 + 90);
  *((_QWORD *)a4 + 11) = v11;
  HMLockObject(a4);
  InternalSetProp((__int64)a1, (unsigned __int16)atomDDETrack, (__int64)a4, 1u);
  return 1LL;
}
