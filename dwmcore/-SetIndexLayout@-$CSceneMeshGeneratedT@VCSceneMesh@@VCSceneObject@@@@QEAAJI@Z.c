__int64 __fastcall CSceneMeshGeneratedT<CSceneMesh,CSceneObject>::SetIndexLayout(__int64 *a1, int a2)
{
  __int64 v2; // rax

  if ( a2 != *((_DWORD *)a1 + 17) )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 17) = a2;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 72))(a1, 0LL, 0LL);
  }
  return 0LL;
}
