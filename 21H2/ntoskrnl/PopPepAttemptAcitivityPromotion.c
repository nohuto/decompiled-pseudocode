/*
 * XREFs of PopPepAttemptAcitivityPromotion @ 0x1402834B8
 * Callers:
 *     PopPepPromoteActivities @ 0x1402832F8 (PopPepPromoteActivities.c)
 * Callees:
 *     PopPepShouldActivityWait @ 0x140283654 (PopPepShouldActivityWait.c)
 */

volatile signed __int32 *__fastcall PopPepAttemptAcitivityPromotion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5)
{
  int v9; // esi
  char v10; // r15
  volatile signed __int32 *result; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi

  v9 = *(_DWORD *)&byte_140004FB8[136 * a4];
  if ( !v9 )
  {
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
LABEL_9:
    result = a5;
    _InterlockedIncrement(a5);
    return result;
  }
  v10 = *(_BYTE *)(a3 + 16);
  result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 0, 0, v10);
  if ( (_BYTE)result == 1 )
    return result;
  if ( v9 == 2 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v13 = v12;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(a1 + 180);
  if ( v9 == 3 )
  {
    v12 = v13 - 1;
    v13 = 0;
    goto LABEL_5;
  }
  v12 = 0;
  if ( v13 )
  {
LABEL_7:
    result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 4, 5, v10);
    if ( (_BYTE)result == 1 )
      return result;
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
    goto LABEL_9;
  }
LABEL_5:
  while ( 1 )
  {
    result = (volatile signed __int32 *)PopPepShouldActivityWait((unsigned int)a1 + 200 * v13 + 240, a4, 1, 3, v10);
    if ( (_BYTE)result == 1 )
      return result;
    if ( ++v13 > v12 )
      goto LABEL_7;
  }
}
