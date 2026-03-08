/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180244BE8
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800101E4 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800E0DB4 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18001360C (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180299118 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  _QWORD *v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // rax
  _QWORD *v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  void *v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 59) && *((_QWORD *)this + 61) )
  {
    v4 = (_QWORD *)((char *)this + 640);
    v5 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 120), (struct ID2D1PrivateCompositorBuffer **)this + 80);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x46Fu, 0LL);
    }
    else
    {
      v7 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v7, *((const void **)this + 59), *((_QWORD *)this + 60));
      v8 = (_QWORD *)((char *)this + 648);
      v9 = CD2DSharedBuffer::CreateFromHeap(*((_DWORD *)this + 124), (struct ID2D1PrivateCompositorBuffer **)this + 81);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x474u, 0LL);
      }
      else
      {
        v11 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        memcpy_0(v11, *((const void **)this + 61), *((_QWORD *)this + 62));
        v12 = 0;
        v13 = *((_QWORD *)this + 60);
        v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        while ( v12 + 144 <= (unsigned int)v13 )
        {
          v15 = v12;
          v12 += 144;
          v16 = (_DWORD *)(v14 + v15);
          v16[1] &= ~0x10u;
          v16[2] = -1;
          v16[3] = 0;
          v16[10] = -1;
          v16[14] = -1;
        }
        v17 = *((_QWORD *)this + 62);
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        while ( v1 + 148 <= (unsigned int)v17 )
        {
          v19 = v1;
          v1 += 148;
          *(_OWORD *)(v19 + v18 + 48) = *((_OWORD *)this + 39);
          *(_DWORD *)(v19 + v18 + 144) = -1;
        }
      }
    }
  }
  return v3;
}
