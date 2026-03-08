/*
 * XREFs of MiCaptureHotPatchInfo @ 0x140A334F8
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A32920 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlFindHotPatchBase @ 0x140A7380C (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x140A7383C (RtlFindHotPatchInformation.c)
 *     RtlValidateHotPatchBase @ 0x140A73A54 (RtlValidateHotPatchBase.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCaptureHotPatchInfo(__int64 a1, int a2, int a3, int a4, __int16 a5, _QWORD *a6, _QWORD *a7)
{
  char *v10; // rdi
  unsigned __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 HotPatchInformation; // rax
  const void *v14; // rbx
  SIZE_T v15; // rsi
  char *Pool; // rax
  _DWORD *HotPatchBase; // rbx

  v10 = 0LL;
  v11 = (unsigned __int64)*(unsigned int *)(a1 + 16) << 12;
  if ( v11 > 0xFFFFFFFF )
  {
LABEL_2:
    v12 = -1073741701;
    goto LABEL_12;
  }
  HotPatchInformation = RtlFindHotPatchInformation(*(_QWORD *)a1);
  v14 = (const void *)HotPatchInformation;
  if ( HotPatchInformation )
  {
    v15 = *(unsigned int *)(HotPatchInformation + 4);
    Pool = (char *)MiAllocatePool(64, v15, 0x4E495048u);
    v10 = Pool;
    if ( Pool )
    {
      memmove(Pool, v14, v15);
      HotPatchBase = (_DWORD *)RtlFindHotPatchBase(v10);
      if ( (unsigned __int8)RtlValidateHotPatchBase((_DWORD)v10, (_DWORD)HotPatchBase, a2, v11) )
      {
        if ( HotPatchBase[3] == a3 && HotPatchBase[2] == a4 )
        {
          *a7 = &v10[HotPatchBase[6]];
          *a6 = v10;
          v10 = 0LL;
          v12 = 0;
        }
        else
        {
          v12 = -1073741735;
        }
        goto LABEL_12;
      }
      goto LABEL_2;
    }
    v12 = -1073741670;
  }
  else
  {
    v12 = -1073741701;
  }
LABEL_12:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
