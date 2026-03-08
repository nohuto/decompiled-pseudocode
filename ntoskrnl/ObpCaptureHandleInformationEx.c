/*
 * XREFs of ObpCaptureHandleInformationEx @ 0x1408A0B60
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 */

__int64 __fastcall ObpCaptureHandleInformationEx(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int v10; // eax
  unsigned int v11; // r9d
  unsigned __int64 HandlePointer; // rax
  int v13; // ecx

  v10 = *a6 + 40;
  *a6 = v10;
  if ( v10 >= 0x28 )
  {
    if ( a5 >= v10 )
    {
      HandlePointer = ExGetHandlePointer(a3);
      v11 = 0;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = a2;
      v13 = ((__int64)*(unsigned int *)a3 >> 17) & 7 | 8;
      if ( (a3[1] & 0x2000000) == 0 )
        LOBYTE(v13) = ((__int64)*(unsigned int *)a3 >> 17) & 7;
      *(_DWORD *)(*(_QWORD *)a1 + 32LL) = v13 & 7;
      *(_WORD *)(*(_QWORD *)a1 + 30LL) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                                            + 40);
      *(_QWORD *)(*(_QWORD *)a1 + 16LL) = a4;
      **(_QWORD **)a1 = HandlePointer + 48;
      *(_WORD *)(*(_QWORD *)a1 + 28LL) = 0;
      *(_DWORD *)(*(_QWORD *)a1 + 24LL) = a3[1] & 0x1FFFFFF;
      *(_QWORD *)a1 += 40LL;
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
