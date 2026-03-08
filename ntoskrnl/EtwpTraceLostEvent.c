/*
 * XREFs of EtwpTraceLostEvent @ 0x1405F9F94
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404210C0 (_alloca_probe.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpGetEventNameFromEventMetadata @ 0x140462A96 (EtwpGetEventNameFromEventMetadata.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpTraceLostEvent(
        _QWORD *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        char a9)
{
  const char *EventNameFromEventMetadata; // r15
  unsigned __int16 v12; // r14
  _BYTE *Pool2; // rdi
  void **v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // r8
  unsigned __int64 v19; // rax
  void *v20; // rsp
  ULONG UserDataCount; // r10d
  _BYTE *v22; // rdx
  char *v23; // r8
  const EVENT_DESCRIPTOR *v24; // rdx
  _BYTE v25[4]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int16 v26; // [rsp+44h] [rbp+4h] BYREF
  __int16 v27; // [rsp+48h] [rbp+8h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp+10h]
  int v29; // [rsp+58h] [rbp+18h]
  int v30; // [rsp+60h] [rbp+20h]
  void **v31; // [rsp+68h] [rbp+28h]
  _QWORD *v32; // [rsp+78h] [rbp+38h]
  void *Src[2]; // [rsp+80h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+50h] BYREF
  char *v35; // [rsp+A0h] [rbp+60h]
  __int64 v36; // [rsp+A8h] [rbp+68h]
  const char *v37; // [rsp+B0h] [rbp+70h]
  __int64 v38; // [rsp+B8h] [rbp+78h]
  _QWORD v39[2]; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v40[16]; // [rsp+D0h] [rbp+90h] BYREF
  char v41; // [rsp+E0h] [rbp+A0h] BYREF

  v32 = a1;
  v30 = a4;
  v27 = 0;
  EventNameFromEventMetadata = 0LL;
  v12 = 0;
  v26 = 0;
  Pool2 = 0LL;
  v28 = 0LL;
  *(_OWORD *)Src = 0LL;
  v14 = 0LL;
  v25[0] = 0;
  v15 = *a1 - *(_QWORD *)&EventTracingProvGuid.Data1;
  if ( !v15 )
    v15 = a1[1] - *(_QWORD *)EventTracingProvGuid.Data4;
  if ( v15 )
  {
    v16 = 0;
    v29 = 0;
    while ( v16 < a6 )
    {
      if ( *(_BYTE *)(a7 + 16LL * v16 + 12) == 1 )
      {
        v14 = (void **)(a7 + 16LL * v16);
        if ( a8 )
        {
          *(_OWORD *)Src = *(_OWORD *)v14;
          v14 = Src;
          v31 = Src;
          v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
          if ( v17 >= 0xFFFF )
            break;
          if ( a9 )
          {
            if ( v17 )
            {
              v18 = (char *)Src[0] + v17;
              if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src[0] )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                v17 = (unsigned int)Src[1];
              }
            }
          }
          if ( v17 <= 0x100 )
          {
            v19 = LODWORD(Src[1]) + 15LL;
            if ( v19 < LODWORD(Src[1]) )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
            Pool2 = v25;
            v28 = v25;
          }
          else
          {
            Pool2 = (_BYTE *)ExAllocatePool2(66LL, LODWORD(Src[1]), 1953985605LL);
            v28 = Pool2;
            if ( !Pool2 )
              break;
            v25[0] = 1;
            v17 = (unsigned int)Src[1];
          }
          memmove(Pool2, Src[0], v17);
        }
        else
        {
          v31 = (void **)(a7 + 16LL * v16);
          Pool2 = *v14;
          v28 = *v14;
        }
        break;
      }
      v29 = ++v16;
    }
    if ( v14 && Pool2 )
    {
      EventNameFromEventMetadata = EtwpGetEventNameFromEventMetadata((__int64)Pool2, *((_DWORD *)v14 + 2), &v26);
      v12 = v26;
    }
    UserData.Ptr = (ULONGLONG)a1;
    *(_QWORD *)&UserData.Size = 16LL;
    v35 = &a5;
    v36 = 4LL;
    if ( EventNameFromEventMetadata && v12 )
    {
      v37 = EventNameFromEventMetadata;
      v38 = v12;
      v39[0] = &EtwpNull;
      v39[1] = 1LL;
      UserDataCount = 6;
      v22 = v40;
      v23 = &v41;
    }
    else
    {
      v27 = *a2;
      v37 = (const char *)&v27;
      v38 = 2LL;
      UserDataCount = 5;
      v22 = v39;
      v23 = v40;
    }
    *(_QWORD *)v22 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v22 + 2) = *a3;
    *((_DWORD *)v22 + 3) = 0;
    *(_QWORD *)v23 = &EtwpNull;
    *((_QWORD *)v23 + 1) = 2LL;
    v24 = &ETW_EVENT_LOST_EVENT;
    if ( v12 )
      v24 = &ETW_EVENT_LOST_TLG_EVENT;
    EtwWriteEx(EtwpEventTracingProvRegHandle, v24, 0LL, v30 | 1, 0LL, 0LL, UserDataCount, &UserData);
    if ( v25[0] )
      ExFreePoolWithTag(Pool2, 0);
  }
}
