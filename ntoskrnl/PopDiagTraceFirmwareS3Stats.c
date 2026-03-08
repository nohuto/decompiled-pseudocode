/*
 * XREFs of PopDiagTraceFirmwareS3Stats @ 0x140AA4A40
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopDiagTraceFirmwareS3Stats()
{
  unsigned int *Pool2; // rbx
  unsigned int *i; // rdi
  unsigned __int64 v2; // kr00_8
  unsigned __int64 v3; // kr08_8
  ULONG Tag; // [rsp+48h] [rbp-19h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+4Ch] [rbp-15h] BYREF
  int v6; // [rsp+54h] [rbp-Dh] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v8; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+Fh] BYREF
  ULONGLONG *p_ullMultiplicand; // [rsp+80h] [rbp+1Fh]
  __int64 v12; // [rsp+88h] [rbp+27h]
  int *v13; // [rsp+90h] [rbp+2Fh]
  __int64 v14; // [rsp+98h] [rbp+37h]

  v6 = 0;
  ullMultiplicand = 0LL;
  Tag = 0;
  pullResult = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, ULONG *))off_140C020E8[0])(35LL, 0LL, 0LL, &Tag) == -1073741820 )
  {
    if ( Tag )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(64LL, Tag, 1953510227LL);
      if ( Pool2 )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD, unsigned int *, ULONG *))off_140C020E8[0])(35LL, Tag, Pool2, &Tag) >= 0 )
        {
          for ( i = Pool2 + 2;
                i < (unsigned int *)((char *)Pool2 + Pool2[1]);
                i = (unsigned int *)((char *)i + *((char *)i + 2)) )
          {
            if ( *(_WORD *)i )
            {
              if ( *(_WORD *)i == 1 )
              {
                v8 = *(_QWORD *)(i + 1) / 0xF4240uLL;
                v3 = *(_QWORD *)(i + 3);
                *(_QWORD *)&UserData.Size = 8LL;
                UserData.Ptr = (ULONGLONG)&v8;
                p_ullMultiplicand = &v9;
                v9 = v3 / 0xF4240;
                v12 = 8LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_SUSPEND, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
              }
            }
            else
            {
              HIDWORD(ullMultiplicand) = i[1];
              LODWORD(ullMultiplicand) = *((_QWORD *)i + 1) / 0xF4240uLL;
              v2 = *((_QWORD *)i + 2);
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&ullMultiplicand + 4;
              p_ullMultiplicand = &ullMultiplicand;
              v13 = &v6;
              v6 = v2 / 0xF4240;
              v12 = 4LL;
              v14 = 4LL;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_S3FWSTATS_RESUME, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
              if ( !qword_140C3CFA8 )
              {
                RtlULongLongMult((unsigned int)ullMultiplicand, PopQpcFrequency, &pullResult);
                pullResult /= 0x3E8uLL;
                qword_140C3CFA8 = pullResult;
              }
            }
          }
        }
        ExFreePoolWithTag(Pool2, Tag);
      }
    }
  }
}
