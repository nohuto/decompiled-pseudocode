__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::GetProperty(
        const __m128i *a1,
        __int64 a2,
        __m128i *a3)
{
  unsigned int v3; // r9d
  __int32 v4; // xmm0_4
  __m128i v5; // xmm0

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xA:
      v5 = _mm_loadu_si128(a1 + 9);
      a3[4].m128i_i32[2] = 69;
      *a3 = v5;
      goto LABEL_9;
    case 0xB:
      v4 = a1[10].m128i_i32[0];
      goto LABEL_6;
    case 0xD:
      v4 = a1[10].m128i_i32[1];
LABEL_6:
      a3->m128i_i32[0] = v4;
      a3[4].m128i_i32[2] = 18;
LABEL_9:
      a3[4].m128i_i8[12] = 1;
      return v3;
  }
  return (unsigned int)CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty(a1, a2, a3, 0LL);
}
