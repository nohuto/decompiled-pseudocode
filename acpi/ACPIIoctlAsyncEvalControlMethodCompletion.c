/*
 * XREFs of ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C002F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C000449A (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002FD84 (ACPIIoctlEvalPostProcessingV1.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

void __fastcall ACPIIoctlAsyncEvalControlMethodCompletion(__int64 a1, int a2, void *a3, IRP *a4)
{
  void *v5; // rdi
  int v6; // esi
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  char v10; // r8
  int v11; // eax

  v5 = a3;
  v6 = a2;
  if ( a2 >= 0 )
  {
    v7 = a4->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 3325952;
    if ( v7 )
    {
      v8 = v7 - 28;
      if ( v8 )
      {
        v9 = v8 - 36;
        if ( v9 )
        {
          if ( v9 != 8 )
          {
LABEL_13:
            dword_1C006F938 = 0;
            pszDest = 0;
            FreeDataBuffs(v5, 1LL);
            goto LABEL_14;
          }
          v10 = 1;
        }
        else
        {
          v10 = 0;
        }
        v11 = ACPIIoctlEvalPostProcessingV2(a4, (__int64)v5, v10);
LABEL_12:
        v6 = v11;
        goto LABEL_13;
      }
      LOBYTE(a3) = 1;
    }
    else
    {
      a3 = 0LL;
    }
    v11 = ACPIIoctlEvalPostProcessingV1(a4, v5, a3);
    goto LABEL_12;
  }
LABEL_14:
  ExFreePoolWithTag(v5, 0);
  a4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  a4->IoStatus.Status = v6;
  IofCompleteRequest(a4, 0);
}
