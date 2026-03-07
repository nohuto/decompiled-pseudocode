__int64 __fastcall Bulk_Stage_Acquire(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire(a1 + 128);
  if ( v1 )
    Bulk_Stage_Initialize(v2, v1);
  return v1;
}
