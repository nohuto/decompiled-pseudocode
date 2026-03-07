__int64 __fastcall flagString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx

  v4 = a1;
  *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12056) = 0;
  if ( (v4 & 1) == 0
    || (v9 = SGDGetUserSessionState(v6, v5, v7, v8), (int)RtlStringCchCatA((char *)(v9 + 12056), v10, "|NEW") >= 0) )
  {
    if ( (v4 & 2) == 0
      || (v11 = SGDGetUserSessionState(v6, v5, v7, v8),
          (int)RtlStringCchCatA((char *)(v11 + 12056), v12, "|INRANGE") >= 0) )
    {
      if ( (v4 & 4) == 0
        || (v13 = SGDGetUserSessionState(v6, v5, v7, v8),
            (int)RtlStringCchCatA((char *)(v13 + 12056), v14, "|INCONTACT") >= 0) )
      {
        if ( (v4 & 0x2000) == 0
          || (v15 = SGDGetUserSessionState(v6, v5, v7, v8),
              (int)RtlStringCchCatA((char *)(v15 + 12056), v16, "|PRIMARY") >= 0) )
        {
          if ( (v4 & 0x4000) == 0
            || (v17 = SGDGetUserSessionState(v6, v5, v7, v8),
                (int)RtlStringCchCatA((char *)(v17 + 12056), v18, "|CONFIDENCE") >= 0) )
          {
            if ( v4 >= 0
              || (v19 = SGDGetUserSessionState(v6, v5, v7, v8),
                  (int)RtlStringCchCatA((char *)(v19 + 12056), v20, "|CANCELED") >= 0) )
            {
              if ( (v4 & 0x10) == 0
                || (v21 = SGDGetUserSessionState(v6, v5, v7, v8),
                    (int)RtlStringCchCatA((char *)(v21 + 12056), v22, "|FIRSTBUTTON") >= 0) )
              {
                if ( (v4 & 0x20) == 0
                  || (v23 = SGDGetUserSessionState(v6, v5, v7, v8),
                      (int)RtlStringCchCatA((char *)(v23 + 12056), v24, "|SECONDBUTTON") >= 0) )
                {
                  if ( (v4 & 0x40) != 0 )
                  {
                    v25 = SGDGetUserSessionState(v6, v5, v7, v8);
                    RtlStringCchCatA((char *)(v25 + 12056), v26, "|THIRDBUTTON");
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return SGDGetUserSessionState(v6, v5, v7, v8) + 12056;
}
