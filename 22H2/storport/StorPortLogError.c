/*
 * XREFs of StorPortLogError @ 0x1C0039960
 * Callers:
 *     StorPortLogErrorVrfy @ 0x1C007F410 (StorPortLogErrorVrfy.c)
 * Callees:
 *     RaidAdapterLogIoError @ 0x1C002D338 (RaidAdapterLogIoError.c)
 *     RaidAdapterLogIoErrorDeferred @ 0x1C002D3E4 (RaidAdapterLogIoErrorDeferred.c)
 */

void __fastcall StorPortLogError(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, char a5, unsigned int a6, int a7)
{
  __int64 v7; // rcx
  int v8; // [rsp+40h] [rbp+8h]

  v7 = **(_QWORD **)(a1 - 16);
  if ( v7 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      RaidAdapterLogIoErrorDeferred(v7, a3, a4, a5, a6, a7);
    }
    else
    {
      v8 = a3;
      BYTE1(v8) = a4;
      BYTE2(v8) = a5;
      RaidAdapterLogIoError(v7, v8, a6, a7);
    }
  }
}
