/*
 * XREFs of EtwpObjectTypeRundown @ 0x1409EC610
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryObject @ 0x140412510 (ZwQueryObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpObjectTypeRundown(__int64 a1, char a2)
{
  unsigned __int16 *Pool2; // rbx
  NTSTATUS v5; // eax
  __int16 v6; // r14
  unsigned __int16 *v7; // rdi
  unsigned __int16 v8; // r14
  unsigned int i; // esi
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  ULONG ObjectInformationLength; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int16 v16; // [rsp+38h] [rbp-38h]
  int *v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+4Ch] [rbp-24h]
  __int64 v20; // [rsp+50h] [rbp-20h]
  int v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+5Ch] [rbp-14h]

  ObjectInformationLength = 1024;
  v15 = 0;
  Pool2 = 0LL;
  v16 = 0;
  while ( 1 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, ObjectInformationLength, 1953985605LL);
    if ( !Pool2 )
      break;
    v5 = ZwQueryObject(0LL, ObjectTypesInformation, Pool2, ObjectInformationLength, &ObjectInformationLength);
    if ( v5 != -1073741820 )
    {
      if ( v5 >= 0 )
      {
        v18 = 4;
        v6 = -(a2 != 0);
        v17 = &v15;
        v19 = 0;
        v7 = Pool2 + 4;
        v8 = v6 + 4389;
        for ( i = 0;
              i < *(_DWORD *)Pool2;
              v7 = (unsigned __int16 *)((char *)v7 + ((v7[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 104) )
        {
          if ( i )
          {
            v10 = *(_DWORD *)a1;
            v11 = *(_QWORD *)(a1 + 1096);
            LOWORD(v15) = *((unsigned __int8 *)v7 + 90);
            v12 = *((_QWORD *)v7 + 1);
            v13 = *v7 + 2;
            v22 = 0;
            v21 = v13;
            v20 = v12;
            EtwpLogKernelEvent((__int64)&v17, v11, v10, 2u, v8, 0x401802u);
          }
          ++i;
        }
      }
      ExFreePoolWithTag(Pool2, 0);
      return;
    }
  }
}
