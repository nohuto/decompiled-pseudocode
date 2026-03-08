/*
 * XREFs of PopBcdRegenerateResumeObject @ 0x140999C24
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x14082B658 (PopBcdEstablishResumeObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14082B5C0 (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14082C4D8 (BcdCreateObject.c)
 *     PopBcdReadElement @ 0x14082C610 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdRegenerateResumeObject(__int64 a1, void *a2, _QWORD *a3)
{
  PVOID v3; // rsi
  int Object; // ebx
  void *v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned int v15; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-25h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-21h] BYREF
  PVOID P; // [rsp+40h] [rbp-19h] BYREF
  PVOID v19; // [rsp+48h] [rbp-11h] BYREF
  void *v20; // [rsp+50h] [rbp-9h] BYREF
  PVOID v21; // [rsp+58h] [rbp-1h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp+7h] BYREF
  GUID v23; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v24; // [rsp+78h] [rbp+1Fh] BYREF

  P = 0LL;
  v17 = 0;
  v3 = 0LL;
  v16 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v15 = 0;
  v21 = 0LL;
  v22[0] = 1;
  v24 = 0LL;
  v22[1] = 270532612;
  v23 = 0LL;
  Object = BcdCreateObject(a1, 0, (int)v22, &v20);
  if ( Object < 0 )
  {
    v7 = v20;
  }
  else
  {
    Object = PopBcdReadElement((int)a2, 301989892, &v19, &v15);
    if ( Object < 0 )
    {
      v7 = v20;
    }
    else
    {
      PopBcdReadElement((int)a2, 301989893, &v21, &v16);
      v7 = v20;
      v9 = BcdSetElementDataWithFlags(v20, 0x12000004u, v8, (__int64)v19, v15);
      v3 = v21;
      Object = v9;
      if ( v9 >= 0 )
      {
        if ( !v21 || (Object = BcdSetElementDataWithFlags(v7, 0x12000005u, v10, (__int64)v21, v16), Object >= 0) )
        {
          Object = PopBcdSetDefaultResumeObjectElements((__int64)v7, (__int64)a2);
          if ( Object >= 0 )
          {
            v23 = GUID_RESUME_LOADER_SETTINGS_GROUP;
            Object = BcdSetElementDataWithFlags(v7, 0x14000006u, v11, (__int64)&v23, 0x10u);
            if ( Object >= 0 )
            {
              if ( (int)PopBcdReadElement((int)a2, 385876087, &P, &v17) < 0
                || (Object = BcdSetElementDataWithFlags(v7, 0x17000077u, v12, (__int64)P, v17), Object >= 0) )
              {
                Object = BcdQueryObject((__int64)v7, 0, 0LL, (__int64)&v24);
                if ( Object >= 0 )
                {
                  Object = BcdSetElementDataWithFlags(a2, 0x23000003u, v13, (__int64)&v24, 0x10u);
                  if ( Object >= 0 )
                  {
                    *a3 = v7;
                    v7 = 0LL;
                  }
                }
              }
              if ( P )
                ExFreePoolWithTag(P, 0);
            }
          }
        }
      }
    }
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  if ( v7 )
  {
    if ( Object < 0 )
      BcdDeleteObject(v7);
    else
      BcdCloseObject((__int64)v7);
  }
  return (unsigned int)Object;
}
