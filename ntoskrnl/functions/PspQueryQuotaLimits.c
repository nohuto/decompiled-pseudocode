__int64 __fastcall PspQueryQuotaLimits(ULONG_PTR BugCheckParameter1, __int64 a2, void *a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // rdi
  __int64 result; // rax
  _QWORD *v9; // rcx
  int v10; // ebx
  int v11; // edx
  int v12; // edx
  int v13; // [rsp+40h] [rbp-D8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD Src[12]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v19; // [rsp+C8h] [rbp-50h] BYREF

  v5 = a4;
  memset(Src, 0, 0x58uLL);
  Object = 0LL;
  v13 = 0;
  memset(&v19, 0, sizeof(v19));
  if ( (_DWORD)v5 != 48 && (_DWORD)v5 != 88 )
    return 3221225476LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)Object + 173);
    Src[0] = v9[24];
    Src[1] = v9[8];
    Src[4] = v9[40];
    Src[6] = v9[56];
    Src[5] = -1LL;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v19);
    v10 = MmQueryWorkingSetInformation(&v18, &v17, &v16, &Src[2], &Src[3], &v13);
    KiUnstackDetachProcess(&v19);
    v11 = 2 - ((v13 & 4) != 0);
    if ( (v13 & 1) != 0 )
      v12 = v11 | 4;
    else
      v12 = v11 | 8;
    LODWORD(Src[10]) = v12;
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
    if ( v10 >= 0 )
    {
      memmove(a3, Src, v5);
      if ( a5 )
        *a5 = v5;
    }
    return (unsigned int)v10;
  }
  return result;
}
