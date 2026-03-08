/*
 * XREFs of ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x1C00810C4
 * Callers:
 *     NtTokenManagerCreateFlipObjectReturnTokenHandle @ 0x1C0075720 (NtTokenManagerCreateFlipObjectReturnTokenHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x1C00755E4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x1C0080FE8 (-CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerRetur.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall FlipManagerCreateConsumerTokenOperation(
        void *a1,
        unsigned __int64 a2,
        struct FlipManagerTokenInitInfo *a3)
{
  int v5; // eax
  PVOID v6; // rdi
  int v7; // esi
  unsigned int v8; // edx
  struct CFlipWaitedConsumerReturn *v9; // rbx
  __int64 v10; // xmm0_8
  struct CFlipWaitedConsumerReturn *v11; // rcx
  PVOID Object; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+38h] [rbp-28h]
  __int128 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+58h] [rbp-8h]
  struct CFlipWaitedConsumerReturn *v18; // [rsp+98h] [rbp+38h] BYREF

  Object = 0LL;
  v18 = 0LL;
  v5 = FlipManagerObject::ResolveHandle(a1, 1u, (char)a3, (struct FlipManagerObject **)&Object);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v7 = FlipManagerObject::CreateWaitedConsumerReturnForConsumer((FlipManagerObject *)Object, a2, &v18);
    if ( v7 < 0 || (v7 = ObReferenceObjectByPointer(v6, 3u, g_pDxgkCompositionObjectType, 0), v7 < 0) )
    {
      v11 = v18;
    }
    else
    {
      *((_QWORD *)&v15 + 1) = 0LL;
      v16 = 0uLL;
      v17 = 0LL;
      v9 = v18;
      v14 = 0LL;
      LOBYTE(v15) = 0;
      *((_QWORD *)v18 + 1) = v6;
      *(_OWORD *)a3 = 0LL;
      *((_OWORD *)a3 + 1) = v15;
      v10 = v17;
      *((_OWORD *)a3 + 2) = 0uLL;
      *((_QWORD *)a3 + 6) = v10;
      FlipManagerTokenInitInfo::~FlipManagerTokenInitInfo((FlipManagerTokenInitInfo *)&v14, v8);
      *((_QWORD *)a3 + 1) = v6;
      v6 = 0LL;
      v11 = 0LL;
      *(_QWORD *)a3 = v9;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CFlipWaitedConsumerReturn *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
