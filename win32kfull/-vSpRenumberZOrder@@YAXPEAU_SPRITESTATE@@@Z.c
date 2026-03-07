void __fastcall vSpRenumberZOrder(struct _SPRITESTATE *a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  int v3; // eax

  v1 = *((_QWORD *)a1 + 1);
  v2 = 0;
  while ( v1 )
  {
    v3 = v2++;
    *(_DWORD *)(v1 + 64) = v3;
    v1 = *(_QWORD *)(v1 + 24);
  }
}
