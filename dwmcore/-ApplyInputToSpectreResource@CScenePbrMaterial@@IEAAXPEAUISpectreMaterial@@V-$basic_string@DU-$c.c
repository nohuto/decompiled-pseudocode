void __fastcall CScenePbrMaterial::ApplyInputToSpectreResource(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  struct ISpectreTexture *v4; // r14
  __int64 v5; // r15
  struct CResource *v9; // rdx
  __int64 v10; // rax
  __int128 *v11; // rbp
  unsigned __int64 v12; // rsi
  void (__fastcall *v13)(__int64 *, __int128 *, struct ISpectreTexture *, __int64); // r13
  __int128 v14; // xmm0
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  struct ISpectreTexture *v17; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  if ( a4 )
  {
    v9 = *(struct CResource **)(a4 + 80);
    if ( v9 )
    {
      CSceneResourceManager::GetSpectreTexture(*(CSceneResourceManager **)(*(_QWORD *)(a1 + 16) + 288LL), v9, &v17);
      v4 = v17;
    }
    v5 = *(_QWORD *)(a4 + 72);
  }
  v10 = *a2;
  v11 = (__int128 *)a3;
  *(_QWORD *)&v18 = 0LL;
  v12 = *(_QWORD *)(a3 + 16);
  v13 = *(void (__fastcall **)(__int64 *, __int128 *, struct ISpectreTexture *, __int64))(v10 + 96);
  if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
    v11 = *(__int128 **)a3;
  if ( v12 >= 0x10 )
  {
    v15 = v12 | 0xF;
    if ( (v12 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(v15 + 1);
    memcpy_0((void *)v18, v11, v12 + 1);
    v20 = v15;
  }
  else
  {
    v14 = *v11;
    v20 = 15LL;
    v18 = v14;
  }
  v19 = v12;
  v13(a2, &v18, v4, v5);
  v16 = *(_QWORD *)(a3 + 24);
  if ( v16 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a3, v16 + 1);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
}
