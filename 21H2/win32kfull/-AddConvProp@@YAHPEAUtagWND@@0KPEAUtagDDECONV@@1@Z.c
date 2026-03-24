/*
 * XREFs of ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C021A918
 * Callers:
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C021ADC0 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

__int64 __fastcall AddConvProp(
        struct tagWND *a1,
        struct tagWND *a2,
        int a3,
        struct tagDDECONV *a4,
        struct tagDDECONV *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v12; // [rsp+20h] [rbp-10h] BYREF
  struct tagDDECONV *Prop; // [rsp+28h] [rbp-8h]

  v12 = (char *)a4 + 24;
  Prop = (struct tagDDECONV *)GetProp((__int64)a1, (unsigned __int16)atomDDETrack, 1LL);
  HMAssignmentLock(&v12);
  Prop = a1;
  v12 = (char *)a4 + 40;
  HMAssignmentLock(&v12);
  Prop = a2;
  v12 = (char *)a4 + 48;
  HMAssignmentLock(&v12);
  v12 = (char *)a4 + 32;
  Prop = a5;
  HMAssignmentLock(&v12);
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  v9 = (unsigned __int16)atomDDEImp;
  *((_DWORD *)a4 + 20) = a3;
  if ( (a3 & 1) == 0 )
    a2 = a1;
  v10 = GetProp((__int64)a2, v9, 1LL);
  if ( v10 )
    ++*(_WORD *)(v10 + 90);
  *((_QWORD *)a4 + 11) = v10;
  HMLockObject(a4);
  InternalSetProp((__int64)a1, (unsigned __int16)atomDDETrack, (__int64)a4, 1u);
  return 1LL;
}
