void __fastcall PATHOBJ_vOffset(struct _PATHOBJ *a1, int a2, int a3)
{
  int v3; // [rsp+48h] [rbp+20h] BYREF
  int v4; // [rsp+4Ch] [rbp+24h]

  if ( a2 || a3 )
  {
    v3 = a2;
    v4 = a3;
    EPATHOBJ::vOffset((EPATHOBJ *)a1, (struct EPOINTL *)&v3);
  }
}
