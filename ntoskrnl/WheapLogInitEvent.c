/*
 * XREFs of WheapLogInitEvent @ 0x14085337C
 * Callers:
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void WheapLogInitEvent()
{
  char *Pool2; // rdi
  __int64 *v1; // rdx
  int i; // r8d
  __int64 *v3; // rcx
  __int64 v4; // r9
  char *v5; // rax
  __int128 v6; // xmm1
  PDRIVER_CONTROL DeviceRoutine; // rsi
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  unsigned int v11; // r8d
  unsigned int Size; // [rsp+38h] [rbp-9h] BYREF
  int Size_4; // [rsp+3Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *p_Size_4; // [rsp+58h] [rbp+17h]
  int v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+64h] [rbp+23h]
  unsigned int *p_Size; // [rsp+68h] [rbp+27h]
  int v19; // [rsp+70h] [rbp+2Fh]
  int v20; // [rsp+74h] [rbp+33h]
  char *v21; // [rsp+78h] [rbp+37h]
  unsigned int v22; // [rsp+80h] [rbp+3Fh]
  int v23; // [rsp+84h] [rbp+43h]

  Size = 1072 * dword_140CF76DC;
  Pool2 = (char *)ExAllocatePool2(66LL, (unsigned int)(1072 * dword_140CF76DC), 1634035799LL);
  if ( Pool2 )
  {
    v1 = (__int64 *)qword_140CF76E8;
    for ( i = 0; v1 != &qword_140CF76E8; v1 = (__int64 *)*v1 )
    {
      v3 = v1;
      v4 = 8LL;
      v5 = &Pool2[1072 * i];
      do
      {
        *(_OWORD *)v5 = *(_OWORD *)v3;
        *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
        *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
        *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
        *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
        *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
        *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
        v5 += 128;
        v6 = *((_OWORD *)v3 + 7);
        v3 += 16;
        *((_OWORD *)v5 - 1) = v6;
        --v4;
      }
      while ( v4 );
      ++i;
      *(_OWORD *)v5 = *(_OWORD *)v3;
      *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
      *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
    }
    DeviceRoutine = WheapDispatchPtr.Queue.Wcb.DeviceRoutine;
    v8 = Size;
    UserData.Reserved = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    UserData.Ptr = (ULONGLONG)&dword_140CF76DC;
    p_Size_4 = &Size_4;
    p_Size = &Size;
    UserData.Size = 4;
    Size_4 = 10;
    v16 = 4;
    v19 = 4;
    v21 = Pool2;
    v22 = Size;
    if ( EtwEventEnabled((REGHANDLE)WheapDispatchPtr.Queue.Wcb.DeviceRoutine, &EVENT_WHEA_INIT_OP) == 1 )
    {
      EtwWrite((REGHANDLE)DeviceRoutine, &EVENT_WHEA_INIT_OP, 0LL, 4u, &UserData);
      v8 = Size;
    }
    v9 = (_DWORD *)ExAllocatePool2(66LL, v8 + 32LL, 1634035799LL);
    v10 = v9;
    if ( v9 )
    {
      v11 = Size;
      v9[3] = 0;
      *v9 = 1733060695;
      v9[1] = 1;
      v9[5] = -2147483646;
      v9[2] = v11 + 32;
      v9[4] = 1280201291;
      v9[6] = 2;
      v9[7] = v11;
      memmove(v9 + 8, Pool2, Size);
      WheaLogInternalEvent(v10);
      ExFreePoolWithTag(v10, 0x61656857u);
    }
    ExFreePoolWithTag(Pool2, 0x61656857u);
  }
}
