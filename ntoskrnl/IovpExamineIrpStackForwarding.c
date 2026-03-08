/*
 * XREFs of IovpExamineIrpStackForwarding @ 0x140ACA004
 * Callers:
 *     IovpCallDriver1 @ 0x140AC9170 (IovpCallDriver1.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     ViErrorReport1 @ 0x1405CDA04 (ViErrorReport1.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140ACFCE8 (IovUtilMultipleDevicesSameDriver.c)
 */

int *__fastcall IovpExamineIrpStackForwarding(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        unsigned __int16 *a6,
        _QWORD *a7,
        int *a8)
{
  unsigned __int16 *v9; // rdi
  int v10; // r14d
  __int64 v11; // rbp
  int v12; // ecx
  BOOL v13; // ebx
  BOOL v14; // r8d
  int v15; // eax
  int v16; // r8d
  __int64 v17; // rcx
  int *result; // rax

  if ( a2 )
  {
    v9 = 0LL;
    v10 = 1;
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(a4 + 184);
  v10 = *(unsigned __int8 *)(a1 + 186) - *(char *)(a4 + 67);
  v9 = (unsigned __int16 *)(v11 + 72 * (v10 - 1LL));
  if ( v10 )
  {
    v12 = *a6 - *v9;
    if ( !v12 )
      v12 = *((unsigned __int8 *)a6 + 2) - *((unsigned __int8 *)v9 + 2);
    v13 = v12 == 0;
    v14 = memcmp(a6 + 4, v9 + 4, 0x20uLL) == 0;
    v15 = 0;
    v16 = v13 && v14;
    if ( *((_QWORD *)a6 + 6) == *((_QWORD *)v9 + 6) )
      v15 = v16;
    if ( v15 )
    {
      v17 = *((_QWORD *)a6 + 7);
      if ( *(_OWORD *)(a6 + 28) == *(_OWORD *)(v9 + 28) && *((_BYTE *)a6 + 3) == *((_BYTE *)v9 + 3) )
      {
        if ( v17 )
        {
          if ( !(unsigned int)IovUtilMultipleDevicesSameDriver(*((_QWORD *)v9 + 5)) )
          {
            ViErrorReport1(0x207u, a5, (const void *)a4);
            *((_QWORD *)a6 + 7) = 0LL;
            *((_BYTE *)a6 + 3) = 0;
          }
          goto LABEL_16;
        }
      }
      else if ( v17 )
      {
        goto LABEL_16;
      }
      *(_QWORD *)(v11 - 8) = v11;
      *(_QWORD *)(v11 - 16) = IovpInternalCompletionTrap;
      *(_BYTE *)(v11 - 69) = -32;
    }
  }
LABEL_16:
  *a7 = v9;
  result = a8;
  *a8 = v10;
  return result;
}
