/*
 * XREFs of PopPepAttemptAcitivityPromotion @ 0x140307A08
 * Callers:
 *     PopPepPromoteActivities @ 0x140307780 (PopPepPromoteActivities.c)
 * Callees:
 *     PopPepShouldActivityWait @ 0x140307BA8 (PopPepShouldActivityWait.c)
 */

volatile signed __int32 *__fastcall PopPepAttemptAcitivityPromotion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5)
{
  int v9; // ebp
  char v10; // r15
  volatile signed __int32 *result; // rax
  unsigned int v12; // esi
  unsigned int v13; // edi

  v9 = *(_DWORD *)&byte_140004FA8[136 * a4];
  if ( v9 )
  {
    v10 = *(_BYTE *)(a3 + 16);
    result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 0, 0, v10);
    if ( (_BYTE)result != 1 )
    {
      if ( v9 != 2 )
      {
        v13 = 0;
        if ( v9 != 3 )
          v13 = *(_DWORD *)(a1 + 180);
        v12 = *(_DWORD *)(a1 + 180) - 1;
        if ( v9 != 3 )
          v12 = 0;
        goto LABEL_7;
      }
      v12 = *(_DWORD *)(a2 + 8);
      v13 = v12;
      while ( 1 )
      {
        result = (volatile signed __int32 *)PopPepShouldActivityWait((unsigned int)a1 + 208 * v13 + 248, a4, 1, 3, v10);
        if ( (_BYTE)result == 1 )
          break;
        ++v13;
LABEL_7:
        if ( v13 > v12 )
        {
          result = (volatile signed __int32 *)PopPepShouldActivityWait((int)a1 + 72, a4, 4, 5, v10);
          if ( (_BYTE)result == 1 )
            return result;
          *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
          goto LABEL_10;
        }
      }
    }
  }
  else
  {
    *(_DWORD *)a3 = *(_DWORD *)a3 & 0xFFFFFFFC | 2;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a3 + 4);
LABEL_10:
    result = a5;
    _InterlockedIncrement(a5);
  }
  return result;
}
