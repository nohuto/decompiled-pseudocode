__int64 __fastcall CAtlasedRectsMeshGeneratedT<CAtlasedRectsMesh,CResource>::SetOrAppendSourceRectangles(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1 + 9;
  if ( !a3 )
    v4[1] = *v4;
  std::vector<MilRectF>::insert<MilRectF const *,0>((_DWORD)v4, (unsigned int)&v7, a1[10], a2[1], a2[1] + 16LL * *a2);
  v5 = *a1;
  *((_BYTE *)a1 + 136) = 1;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v5 + 72))(a1, 0LL, 0LL);
  return 0LL;
}
