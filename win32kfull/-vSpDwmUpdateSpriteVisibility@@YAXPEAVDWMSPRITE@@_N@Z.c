void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v4; // rbx
  void *v5; // rax

  v3 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 != (*((_DWORD *)a1 + 35) & 1) )
  {
    *((_DWORD *)a1 + 35) = (unsigned __int8)a2 | *((_DWORD *)a1 + 35) & 0xFFFFFFFE;
    v4 = *(_QWORD *)a1;
    v5 = (void *)UserReferenceDwmApiPort(a1, a2, a3);
    DwmAsyncShowSprite(v5, v4, v3);
  }
}
