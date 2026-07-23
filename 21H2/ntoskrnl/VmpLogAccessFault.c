/*
 * XREFs of VmpLogAccessFault @ 0x1405A403C
 * Callers:
 *     VmAccessFault @ 0x14092EAC0 (VmAccessFault.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall VmpLogAccessFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+28h] [rbp-D8h]
  int Flink; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-90h] BYREF
  int *p_Flink; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  if ( *(_DWORD *)VmpTraceLoggingProvider > 5u )
  {
    if ( tlgKeywordOn(VmpTraceLoggingProvider, 8LL) )
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      p_Flink = &Flink;
      v25 = &v19;
      v27 = &v20;
      v29 = &v21;
      v16 = a5;
      v31 = &v16;
      v17 = a6;
      v33 = &v17;
      v18 = a7;
      v35 = &v18;
      v26 = v8;
      v28 = v8;
      v21 = v10;
      v30 = v8;
      v24 = 4LL;
      v19 = a2;
      v20 = v12;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      tlgWriteEx_EtwWriteEx(v11, (unsigned __int8 *)&word_14002C61A, v9, 0, v13, v14, 9u, &v22);
    }
  }
}
