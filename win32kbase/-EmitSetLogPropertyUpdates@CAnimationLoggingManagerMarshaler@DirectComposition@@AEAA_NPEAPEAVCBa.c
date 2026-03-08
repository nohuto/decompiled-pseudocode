/*
 * XREFs of ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C278
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C1A0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C005C3EC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C005F8A4 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65891078065f0b4b6a24da5ea3e43146___ @ 0x1C0262B2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_65891078065f0b4b6a24da5ea3e4314.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r14
  struct DirectComposition::CWeakReferenceBase *v9; // rdx
  char updated; // al
  size_t v11; // r8
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 24);
  v4 = *((_DWORD *)this + 20);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 24);
    do
    {
      Src = *(_OWORD *)(*((_QWORD *)this + 11) * v8 + *((_QWORD *)this + 7));
      v9 = (struct DirectComposition::CWeakReferenceBase *)Src;
      if ( (_QWORD)Src && *(_QWORD *)(Src + 16) )
      {
        v13[0] = this;
        v13[1] = &Src;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_65891078065f0b4b6a24da5ea3e43146___(
                    this,
                    a2,
                    v13);
        v9 = (struct DirectComposition::CWeakReferenceBase *)Src;
        v6 = updated;
      }
      else
      {
        v6 = 1;
      }
      if ( v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          *((DirectComposition::CApplicationChannel **)*a2 + 1),
          v9);
        v11 = *((_QWORD *)this + 11);
        *(_QWORD *)&Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 7) + v11 * v2), &Src, v11);
      }
      if ( !v6 )
        break;
      ++*((_DWORD *)this + 24);
      ++v2;
      ++v8;
    }
    while ( v2 < v4 );
  }
  if ( *((_DWORD *)this + 24) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 56),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 24) = 0;
  }
  return v6;
}
