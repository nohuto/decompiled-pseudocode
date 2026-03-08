/*
 * XREFs of ValidatePointerOffset @ 0x1C01E7E80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidatePointerOffset(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3, unsigned int *a4)
{
  int v4; // r15d
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  int v9; // edi
  __int64 v10; // rax
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  int v17; // [rsp+94h] [rbp+Ch]
  int v18; // [rsp+A4h] [rbp+1Ch]

  v18 = HIDWORD(a3);
  v17 = HIDWORD(a1);
  v4 = a3;
  v5 = 0;
  v6 = a3;
  *(_QWORD *)a4 = a3;
  v9 = a1;
  if ( a3 )
  {
    v10 = HMValidateHandleNoSecure(*((_QWORD *)a2 + 3), 19);
    if ( v10 )
    {
      v11 = *(_DWORD **)(v10 + 472);
      v12 = v9 + v4;
      v13 = v17 + v18;
      if ( v9 + v4 >= v11[40] )
      {
        v14 = v11[42];
        if ( v12 >= v14 )
          v12 = v14 - 1;
      }
      else
      {
        v12 = v11[40];
      }
      if ( v13 >= v11[41] )
      {
        v15 = v11[43];
        if ( v13 >= v15 )
          v13 = v15 - 1;
      }
      else
      {
        v13 = v11[41];
      }
      v6 = __PAIR64__(v13 - v17, v12 - v9);
    }
    *(_QWORD *)a4 = v6;
    v5 = 1;
  }
  if ( (unsigned int)TouchTargetingEnabledForInput(*((_QWORD *)a2 + 5), a2 + 4) )
  {
    EtwTraceTouchTargetingOffset(*a4, a4[1], *((unsigned int *)a2 + 3), *a2);
    EtwTraceTouchTargetingPointerEvent(
      *((unsigned int *)a2 + 3),
      *a2,
      *((unsigned int *)a2 + 2),
      *((unsigned int *)a2 + 5),
      *((_DWORD *)a2 + 27),
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 28),
      *((_DWORD *)a2 + 30),
      *((_DWORD *)a2 + 29),
      *((_DWORD *)a2 + 31),
      *((_DWORD *)a2 + 36));
  }
  return v5;
}
