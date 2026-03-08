/*
 * XREFs of VfPnpVerifyIrpStackUpward @ 0x140AE4140
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1405CDA88 (ViErrorReport10.c)
 *     PpvUtilIsPdo @ 0x140ABF024 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140ACFA00 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140ACFA64 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140ACFB14 (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140ACFCB0 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE4430 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackUpward(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbp
  __int64 v11; // r12
  const void *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v16; // rbx
  _QWORD *BottomDeviceObjectWithTag; // rax
  void *v18; // r8
  BOOL v19; // ebx
  const void *v20; // r9

  result = IovUtilIsWdmStack(*(_QWORD **)(a2 + 40));
  if ( !(_DWORD)result )
    return result;
  v10 = (const void *)*a1;
  v11 = a1[30];
  v12 = *(const void **)(a4 + 40);
  v13 = *(_DWORD *)(*a1 + 48LL);
  if ( !a5 )
  {
LABEL_17:
    if ( v13 == -1073741637 )
      goto LABEL_18;
    goto LABEL_21;
  }
  result = *(unsigned int *)(a4 + 4);
  v14 = *(_DWORD *)(a4 + 4) & 0x10000000;
  if ( (int)result < 0 )
  {
    if ( !v14 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( v14 )
  {
LABEL_16:
    result = ViPnpVerifyMinorWasProcessedProperly(*a1, a2, 0, (unsigned int)(v13 != -1073741637) + 1, (__int64)v12, 0);
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a2 + 1) == 8 )
    goto LABEL_17;
  if ( (a1[7] & 0x20) != 0 )
  {
    result = ViErrorReport1(0x22Du, *(const void **)(a4 + 40), (const void *)*a1);
    goto LABEL_17;
  }
  result = v13 + 0x80000000;
  if ( (int)result >= 0 && v13 != -1073741637 )
    goto LABEL_21;
  result = (unsigned int)VfIoSwitchedOffNoReboot;
  if ( VfIoSwitchedOffNoReboot )
    goto LABEL_17;
  if ( v13 >= 0 )
  {
    result = ViErrorReport1(0x22Eu, *(const void **)(a4 + 40), (const void *)*a1);
    goto LABEL_21;
  }
  if ( v13 == -1073741637 )
  {
    result = ViErrorReport1(0x22Fu, *(const void **)(a4 + 40), (const void *)*a1);
LABEL_18:
    if ( (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
    {
      result = ViErrorReport1(0x216u, v12, v10);
      *(_DWORD *)(a3 + 4) |= 0x2000000u;
    }
  }
LABEL_21:
  if ( *(_BYTE *)(a2 + 1) == 23 )
  {
    LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a2 + 40));
    if ( LowerDeviceObjectWithTag )
    {
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    }
    else
    {
      v16 = *(_QWORD **)(a2 + 40);
      BottomDeviceObjectWithTag = IovUtilGetBottomDeviceObjectWithTag(v16);
      v18 = BottomDeviceObjectWithTag;
      v19 = BottomDeviceObjectWithTag == v16 && PpvUtilIsPdo((__int64)BottomDeviceObjectWithTag);
      ObfDereferenceObjectWithTag(v18, 0x49667256u);
      if ( !v19 )
        ViErrorReport10(0x241u, v12, *(const void **)(v11 + 64), *(const void **)(a2 + 40));
    }
    result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(a2 + 40), 0);
    if ( (_DWORD)result )
      return ViErrorReport10(0x242u, v12, *(const void **)(v11 + 64), v20);
  }
  return result;
}
