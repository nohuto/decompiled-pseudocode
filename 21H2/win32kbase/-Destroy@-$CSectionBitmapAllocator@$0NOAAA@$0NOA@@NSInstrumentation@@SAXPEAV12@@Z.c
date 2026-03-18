/*
 * XREFs of ?Destroy@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9D60
 * Callers:
 *     ??1?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D9760 (--1-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA@XZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D9C7C (-Create@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Destroy(PVOID *P)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v3; // rcx

  v1 = (unsigned __int64)P[3];
  v3 = (unsigned __int64)P[2];
  if ( v1 != v3 )
    RtlFindSetBits((PRTL_BITMAP)(v1 ^ v3), 1u, 0);
  if ( *P )
    ExFreePoolWithTag(*P, 0);
  if ( P[3] != P[2] )
    ExFreePoolWithTag((PVOID)((unsigned __int64)P[3] ^ (unsigned __int64)P[2]), 0);
  ExFreePoolWithTag(P, 0);
}
