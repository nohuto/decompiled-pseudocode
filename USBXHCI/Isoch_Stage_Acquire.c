/*
 * XREFs of Isoch_Stage_Acquire @ 0x1C0045208
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0003800 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     StageQueue_Acquire @ 0x1C001227C (StageQueue_Acquire.c)
 *     Isoch_Stage_Initialize @ 0x1C0045300 (Isoch_Stage_Initialize.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Acquire(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  __int64 v2; // r11

  v1 = StageQueue_Acquire((unsigned __int8 *)(a1 + 128));
  if ( v1 )
    Isoch_Stage_Initialize(v2, v1);
  return v1;
}
