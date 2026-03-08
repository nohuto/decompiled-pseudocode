/*
 * XREFs of NtAlpcCreateSecurityContext @ 0x140715210
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140715630 (AlpcpDeleteBlob.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcCreateSecurityContext(HANDLE Handle, int a2, __m128i *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v7; // rcx
  __m128i v8; // xmm1
  unsigned __int64 v9; // xmm1_8
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // edi
  PVOID v13; // r14
  ULONG_PTR v14; // rbx
  struct _SECURITY_QUALITY_OF_SERVICE *v16; // xmm1_8
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v18; // [rsp+38h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  LODWORD(v20) = 0;
  *(_QWORD *)&v18.Length = 0LL;
  *(_DWORD *)&v18.ContextTrackingMode = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a2 )
  {
    v12 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v7 = (__int64)a3;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 23) = *(_BYTE *)(v7 + 23);
      v8 = *a3;
      v20 = a3[1].m128i_i64[0];
      v9 = _mm_srli_si128(v8, 8).m128i_u64[0];
      v10 = v9;
      if ( v9 )
      {
        v11 = v9;
        if ( v9 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)v11;
      }
    }
    else
    {
      v16 = (struct _SECURITY_QUALITY_OF_SERVICE *)_mm_srli_si128(*a3, 8).m128i_u64[0];
      v10 = (unsigned __int64)v16;
      if ( v16 )
        v18 = *v16;
    }
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( !v10 )
        v18 = *(struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      v13 = Object;
      v12 = AlpcpCreateSecurityContext(
              (volatile signed __int64 *)Object,
              KeGetCurrentThread(),
              1,
              &v18,
              &BugCheckParameter2);
      if ( v12 >= 0 )
      {
        v14 = BugCheckParameter2;
        a3[1].m128i_i64[0] = *(_QWORD *)(BugCheckParameter2 + 8);
        AlpcpDereferenceBlobEx(v14);
      }
      ObfDereferenceObject(v13);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v12;
}
