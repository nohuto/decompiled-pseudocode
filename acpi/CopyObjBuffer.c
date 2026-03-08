/*
 * XREFs of CopyObjBuffer @ 0x1C00054F2
 * Callers:
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C004BD50 (GetObjectTypeName.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall CopyObjBuffer(void *a1, size_t Size, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // esi
  int v7; // r8d
  int v8; // r8d
  int ObjectTypeName; // eax
  const void *v10; // rdi
  unsigned int v11; // ebx

  v4 = Size;
  v5 = 0;
  v7 = *(unsigned __int16 *)(a3 + 2) - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(0LL, 3222536201LL);
        ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
        PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
        return (unsigned int)-1072431095;
      }
      v10 = *(const void **)(a3 + 32);
      v11 = *(_DWORD *)(a3 + 24);
    }
    else
    {
      v10 = *(const void **)(a3 + 32);
      v11 = *(_DWORD *)(a3 + 24) - 1;
    }
  }
  else
  {
    v10 = (const void *)(a3 + 16);
    v11 = 8;
  }
  if ( a1 != v10 )
  {
    memset(a1, 0, (unsigned int)Size);
    if ( v4 <= v11 )
      v11 = v4;
    memmove(a1, v10, v11);
  }
  return v5;
}
