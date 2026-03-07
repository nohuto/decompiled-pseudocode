void __fastcall vDuplicateAndScaleRegion(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a2;
  v7 = *a2;
  v9 = a1;
  if ( !a1 )
  {
    if ( !v3 )
      return;
    v6 = v3;
    goto LABEL_11;
  }
  if ( v3 )
    goto LABEL_14;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0x70u);
  if ( v8 )
  {
    v3 = v8;
    v7 = v8;
    *a2 = v8;
  }
  if ( v3 )
  {
LABEL_14:
    if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v7, (struct RGNOBJ *)&v9) )
    {
      RGNOBJ::vScale((__int64 *)&v7, a3);
      *a2 = v7;
      return;
    }
    v6 = v7;
LABEL_11:
    REGION::vDeleteREGION(v6);
    *a2 = 0LL;
  }
}
