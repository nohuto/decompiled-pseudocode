__int64 __fastcall CManipulation::_UpdateEdgyExperienceInput(__int64 a1)
{
  int v1; // ebx
  __int128 *v2; // rsi
  int v4; // eax
  __int64 v5; // rcx
  struct CWeakResourceReference *v6; // rcx
  __int64 v7; // rbp
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  int updated; // eax
  __int64 v18; // rcx
  struct CWeakResourceReference *v20; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-B8h] BYREF
  int v22; // [rsp+48h] [rbp-B0h]
  __int128 v23; // [rsp+50h] [rbp-A8h]
  __int128 v24; // [rsp+60h] [rbp-98h]
  __int128 v25; // [rsp+70h] [rbp-88h]
  __int128 v26; // [rsp+80h] [rbp-78h]
  __int128 v27; // [rsp+90h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-58h]
  __int128 v29; // [rsp+B0h] [rbp-48h]
  __int128 v30; // [rsp+C0h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-28h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v1 = 0;
  v2 = (__int128 *)(a1 + 576);
  if ( !*(_DWORD *)(a1 + 576) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_QWORD *)(a1 + 720) )
    goto LABEL_11;
  v20 = 0LL;
  v4 = CWeakResourceReference::Get((struct CResource *)a1, &v20);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x94u, 0LL);
    v6 = v20;
  }
  else
  {
    v6 = 0LL;
    *(_QWORD *)(a1 + 720) = v20;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v1 >= 0 )
  {
LABEL_11:
    v7 = *(_QWORD *)(a1 + 720);
    if ( v7 )
    {
      memset_0(&v21, 0, 0x98uLL);
      v8 = *v2;
      v21 = v7;
      v9 = v2[1];
      v22 = 2;
      v23 = v8;
      v10 = v2[2];
      v24 = v9;
      v11 = v2[3];
      v25 = v10;
      v12 = v2[4];
      v26 = v11;
      v13 = v2[5];
      v27 = v12;
      v14 = v2[6];
      v28 = v13;
      v29 = v14;
      v15 = *((_QWORD *)v2 + 16);
      v30 = v2[7];
      v31 = v15;
      LODWORD(v23) = *(_DWORD *)(a1 + 712);
      updated = CInputManager::UpdateEdgyInput(
                  *(CInputManager **)(*(_QWORD *)(a1 + 16) + 232LL),
                  (const struct EdgyCompositionConfigurationUpdateEx *)&v21,
                  v16);
      v1 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, updated, 0x414u, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v1, 0x3F9u, 0LL);
  }
  return (unsigned int)v1;
}
