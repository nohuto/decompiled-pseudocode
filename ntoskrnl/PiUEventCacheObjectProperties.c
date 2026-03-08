/*
 * XREFs of PiUEventCacheObjectProperties @ 0x14068C634
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 * Callees:
 *     PnpGetObjectProperty @ 0x1406CEE90 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventCacheObjectProperties(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r15
  PVOID *v3; // r14
  void *v4; // rsi
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // eax
  int v13; // edx
  int v14; // edx
  int ObjectProperty; // eax
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v2 = a1 + 60;
  *(_DWORD *)(a1 + 60) = -1;
  v3 = (PVOID *)(a1 + 48);
  LODWORD(v16) = 0;
  v4 = 0LL;
  LODWORD(v17) = 0;
  v18 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v5 = v1 - 1;
  if ( !v5 )
  {
LABEL_4:
    v8 = a1 + 120;
    goto LABEL_5;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v13 = v7 - 1;
      if ( v13 )
      {
        v14 = v13 - 5;
        if ( v14 )
        {
          if ( (unsigned int)(v14 - 1) >= 2 )
            return 0;
        }
      }
    }
    goto LABEL_4;
  }
  ObjectProperty = PnpGetObjectProperty(
                     0x59706E50u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v16,
                     (__int64)&v18,
                     (__int64)&v17,
                     0);
  v4 = (void *)v18;
  v10 = ObjectProperty;
  if ( ObjectProperty < 0 )
    goto LABEL_9;
  v8 = v18;
LABEL_5:
  v9 = PnpGetObjectProperty(
         0x59706E50u,
         0LL,
         0LL,
         (__int64)&DEVPKEY_Device_EffectiveRestrictedSD,
         (__int64)&v16,
         (__int64)v3,
         (__int64)&v17,
         0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( (_DWORD)v16 != 19 )
    {
      ExFreePoolWithTag(*v3, 0x59706E50u);
      *v3 = 0LL;
    }
    goto LABEL_7;
  }
  if ( v9 == -1073741772 || v9 == -1073741275 )
  {
LABEL_7:
    v11 = PnpGetObjectProperty(
            PiPnpRtlCtx,
            v8,
            1,
            0,
            0LL,
            (__int64)&DEVPKEY_Device_SessionId,
            (__int64)&v16,
            v2,
            4,
            (__int64)&v17,
            0);
    v10 = v11;
    if ( v11 == -1073741772 || v11 == -1073741275 )
      v10 = 0;
  }
LABEL_9:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x59706E50u);
  return v10;
}
