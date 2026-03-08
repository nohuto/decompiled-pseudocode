/*
 * XREFs of ObpCaptureHandleInformation @ 0x1408A0A50
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 */

__int64 __fastcall ObpCaptureHandleInformation(
        __int64 a1,
        __int16 a2,
        __int64 *a3,
        __int16 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v10; // eax
  unsigned int v11; // r8d
  unsigned __int64 HandlePointer; // r9
  char v13; // dl

  v10 = *a6 + 24;
  *a6 = v10;
  if ( v10 >= 0x18 )
  {
    if ( a5 >= v10 )
    {
      HandlePointer = ExGetHandlePointer(a3);
      **(_WORD **)a1 = a2;
      v13 = ((__int64)*(unsigned int *)a3 >> 17) & 7 | 8;
      v11 = 0;
      if ( (a3[1] & 0x2000000) == 0 )
        v13 = ((__int64)*(unsigned int *)a3 >> 17) & 7;
      *(_BYTE *)(*(_QWORD *)a1 + 5LL) = v13 & 7;
      *(_BYTE *)(*(_QWORD *)a1 + 4LL) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                                 + 40);
      *(_WORD *)(*(_QWORD *)a1 + 6LL) = a4;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = HandlePointer + 48;
      *(_WORD *)(*(_QWORD *)a1 + 2LL) = 0;
      *(_DWORD *)(*(_QWORD *)a1 + 16LL) = a3[1] & 0x1FFFFFF;
      *(_QWORD *)a1 += 24LL;
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v11;
}
