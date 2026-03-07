__int64 __fastcall CProjectedShadowScene::DrawShadows(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  _QWORD *v10; // r10
  struct CProjectedShadowScene::ReceiverEntry *v11; // r15
  _QWORD *i; // rbx
  unsigned __int64 v13; // r11
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  _BYTE v18[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v6 = CProjectedShadowScene::PrepareShadows(this, a2, a3);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x397u, 0LL);
  }
  else
  {
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, a3);
    v10 = (_QWORD *)*((_QWORD *)this + 8);
    v11 = ReceiverEntry;
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v20 = i[2];
      std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::_Find_lower_bound<CProjectedShadowCaster *>(
        (char *)v11 + 8,
        v18,
        &v20);
      if ( !*(_BYTE *)(v19 + 25) && v13 >= *(_QWORD *)(v19 + 32) && v19 != *((_QWORD *)v11 + 1) )
      {
        v15 = *(_QWORD *)(v19 + 40) + 64LL + *(int *)(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 64LL) + 8LL);
        v16 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, __int64, _QWORD))(*(_QWORD *)v15 + 16LL))(
                v15,
                a2,
                *(_QWORD *)(v13 + 64) + 140LL,
                0LL);
        v8 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3ACu, 0LL);
          return v8;
        }
        v10 = (_QWORD *)*((_QWORD *)this + 8);
      }
    }
  }
  return v8;
}
