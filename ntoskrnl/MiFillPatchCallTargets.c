char __fastcall MiFillPatchCallTargets(unsigned int *a1, unsigned int *a2, int a3, char a4)
{
  __int64 v4; // r8

  if ( (a3 & 0xFC000) == 0x44000 && a4 )
  {
    v4 = *((_QWORD *)a1 + 1);
    if ( v4 )
      *(_QWORD *)(v4 + 16LL * *a1) = *a2;
    ++*a1;
  }
  return 0;
}
