__int64 __fastcall WheapWmiExecuteErrorInjectionMethod(int a1, unsigned int a2, int *a3, unsigned int a4, int *a5)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int *v12; // r9
  __int64 v13; // r8
  _QWORD *v14; // r9
  int v15; // ebx
  int InjectionCapabilities; // eax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1 - 1;
  if ( !v7 )
  {
    v19 = 0;
    InjectionCapabilities = PshedGetInjectionCapabilities(&v19);
    v9 = 8;
    if ( a2 >= 8 )
    {
      if ( InjectionCapabilities >= 0 )
      {
        v18 = v19;
        v8 = 0;
        *a3 = 0;
        a3[1] = v18;
        goto LABEL_10;
      }
      goto LABEL_8;
    }
LABEL_12:
    v8 = -1073741789;
    goto LABEL_10;
  }
  if ( v7 == 1 )
  {
    if ( a4 < 0x24 )
    {
      v8 = -1073741811;
      v9 = 0;
      goto LABEL_10;
    }
    v10 = (unsigned int)*a3;
    v11 = *((_QWORD *)a3 + 1);
    v12 = (unsigned int *)(a3 + 4);
    v13 = *((_QWORD *)a3 + 2);
    v14 = v12 + 2;
    v9 = 4;
    if ( a2 >= 4 )
    {
      v15 = 0;
      v8 = PshedInjectError(v10, v11, v13, *v14, v14[1]);
      if ( v8 >= 0 )
      {
LABEL_9:
        *a3 = v15;
        goto LABEL_10;
      }
LABEL_8:
      v8 = -1073741823;
      v15 = -1073741823;
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  v8 = -1073741161;
  v9 = 0;
LABEL_10:
  *a5 = v9;
  return (unsigned int)v8;
}
