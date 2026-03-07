unsigned __int8 *__fastcall Isoch_Stage_Acquire(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire((unsigned __int8 *)(a1 + 128));
  if ( v1 )
    Isoch_Stage_Initialize(v2, v1);
  return v1;
}
