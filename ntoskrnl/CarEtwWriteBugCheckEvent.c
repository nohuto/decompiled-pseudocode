/*
 * XREFs of CarEtwWriteBugCheckEvent @ 0x1405D078C
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x1405D1FA0 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CarIncrementEtwEventCount @ 0x1405D0D5C (CarIncrementEtwEventCount.c)
 *     McTemplateK0dszu_EtwWriteTransfer @ 0x1405D121C (McTemplateK0dszu_EtwWriteTransfer.c)
 *     DifiDbgPrint @ 0x1405D3224 (DifiDbgPrint.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarEtwWriteBugCheckEvent(__int64 a1, int a2, const CHAR *a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // esi
  _QWORD *Pool2; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  void *v15; // rax
  void *v16; // r14
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r11
  const CHAR *v21; // rbx
  __int64 v22; // r11
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  const CHAR *v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v37[16]; // [rsp+D0h] [rbp-30h] BYREF
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  const CHAR **v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  _QWORD *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  void *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]

  v4 = 0;
  v24 = a3;
  if ( CarEtwEventBook )
  {
    if ( !a1 || a1 == -1128 )
    {
      DifiDbgPrint("Violation stack passed to CarEtwWriteBugCheckEvent is NULL\n");
      return 3221225485LL;
    }
    else
    {
      v9 = CarIncrementEtwEventCount();
      v10 = 10LL;
      v11 = v9;
      if ( v9 < 0xA || v9 == 100 || v9 == 1000 || v9 == 10000 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          memset(Pool2, 0, 0x50uLL);
          v14 = v13;
          do
          {
            *v14 = *(_QWORD *)((char *)v14 + a1 - (_QWORD)v13 + 1128);
            ++v14;
            --v10;
          }
          while ( v10 );
          v15 = (void *)ExAllocatePool2(64LL, 80LL, 1316118851LL);
          v16 = v15;
          if ( v15 )
          {
            memset(v15, 0, 0x50uLL);
            LOBYTE(v20) = 4;
            if ( (unsigned int)dword_140C09378 <= 5 )
            {
              v21 = v24;
            }
            else if ( tlgKeywordOn((__int64)&dword_140C09378, 0x800000000000LL) )
            {
              v25 = v11;
              v30 = &v25;
              v26 = CarTipTag;
              v32 = &v26;
              v34 = &v23;
              v31 = v20;
              v33 = v20;
              v23 = a4;
              v35 = 1LL;
              tlgCreate1Sz_wchar_t((__int64)v36, (const size_t *)(a1 + 4));
              v21 = v24;
              tlgCreate1Sz_char((__int64)v37, v24);
              v27 = a2;
              v38 = &v27;
              v28 = *(_QWORD *)(a1 + 72);
              v39 = v22;
              v40 = &v28;
              LODWORD(v24) = *(_DWORD *)(a1 + 80);
              v42 = &v24;
              v41 = 8LL;
              v43 = v22;
              v44 = v13;
              v45 = 80LL;
              v46 = v16;
              v47 = 80LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C09378,
                (unsigned __int8 *)byte_1400342D9,
                0LL,
                0LL,
                0xCu,
                &v29);
              LOBYTE(v20) = 4;
            }
            else
            {
              v21 = v24;
            }
            if ( ((unsigned __int8)v20 & (unsigned __int8)Microsoft_Windows_Kernel_XDVEnableBits) != 0 )
              v4 = McTemplateK0dszu_EtwWriteTransfer(v18, v17, v19, a2, (__int64)v21, a1 + 4, a4);
            else
              v4 = 0;
          }
          else
          {
            v4 = -1073741801;
          }
          ExFreePoolWithTag(v13, 0x4E726143u);
          if ( v16 )
            ExFreePoolWithTag(v16, 0x4E726143u);
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
      return v4;
    }
  }
  else
  {
    if ( !CarLogEarlyReportCount )
      DifiDbgPrint("CAR ETW functionality isn't initialized yet.\n");
    ++CarLogEarlyReportCount;
    return 3221225871LL;
  }
}
