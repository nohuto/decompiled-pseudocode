/*
 * XREFs of HvSwapLogFiles @ 0x140732470
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1407307FC (HvpLogTypeToLogArrayIndex.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  unsigned int v2; // eax
  char v3; // r10
  int v4; // r11d
  int *v5; // rsi
  int v6; // edx
  __int64 v7; // rbx
  int v8; // eax
  __int64 result; // rax
  bool v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-A0h] BYREF
  bool *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  int *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  int *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  int *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  LOBYTE(v2) = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 168));
  v5 = (int *)(a1 + 180);
  v6 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 176);
  v7 = MEMORY[0xFFFFF78000000014];
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    v15 = *(_DWORD *)(a1 + 8LL * v2 + 1808);
    v19 = &v10;
    v11 = *(_DWORD *)(a1 + 280);
    v22 = &v11;
    v10 = v3 == 0;
    v8 = *(_DWORD *)(a1 + 188);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v12 = v8;
    v25 = &v12;
    v28 = &v13;
    v14 = *v5;
    v31 = &v14;
    v34 = &v15;
    v37 = &v16;
    v17 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 200);
    v40 = &v17;
    v16 = v6;
    v20 = 1;
    v23 = 4;
    v26 = 4;
    v13 = v4;
    v29 = 4;
    v32 = 4;
    v35 = 4;
    v38 = 4;
    v41 = 8;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04328,
      (unsigned __int8 *)&byte_14003798F,
      0LL,
      0LL,
      0xAu,
      &v18);
  }
  *(_DWORD *)(a1 + 168) = 5 - (*(_DWORD *)(a1 + 168) != 4);
  result = *(unsigned int *)(a1 + 172);
  *v5 = 0;
  *(_DWORD *)(a1 + 176) = result;
  *(_QWORD *)(a1 + 200) = v7;
  return result;
}
