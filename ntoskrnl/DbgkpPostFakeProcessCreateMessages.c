/*
 * XREFs of DbgkpPostFakeProcessCreateMessages @ 0x140934758
 * Callers:
 *     NtDebugActiveProcess @ 0x140935750 (NtDebugActiveProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     DbgkpPostFakeThreadMessages @ 0x140934820 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140934C44 (DbgkpPostModuleMessages.c)
 */

__int64 __fastcall DbgkpPostFakeProcessCreateMessages(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+38h] [rbp-60h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v10; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0LL;
  Object = 0LL;
  memset(&v10, 0, sizeof(v10));
  v9 = 0LL;
  result = DbgkpPostFakeThreadMessages(BugCheckParameter1, a2, 0LL, &Object, &v9);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v10);
    DbgkpPostModuleMessages(BugCheckParameter1, Object, a2);
    KiUnstackDetachProcess(&v10);
    ObfDereferenceObjectWithTag(Object, 0x4F676244u);
    result = 0LL;
    v4 = v9;
  }
  *a3 = v4;
  return result;
}
