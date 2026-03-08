/*
 * XREFs of _PnpDispatchInterfaceClass @ 0x1406C59F0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140244BE4 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmValidateInstallerClassName @ 0x1406C4F20 (_CmValidateInstallerClassName.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1406C4F44 (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetInterfaceClassMappedProperty @ 0x1406C58F4 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetMatchingCommonClassList @ 0x1408241FC (_CmGetMatchingCommonClassList.c)
 *     _CmCreateInterfaceClass @ 0x14087BA38 (_CmCreateInterfaceClass.c)
 *     _CmDeleteInterfaceClass @ 0x140A6012C (_CmDeleteInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x140A66558 (_CmGetInterfaceClassMappedPropertyKeys.c)
 *     _CmGetInterfaceClassMappedPropertyLocales @ 0x140A6672C (_CmGetInterfaceClassMappedPropertyLocales.c)
 *     _CmSetInterfaceClassMappedProperty @ 0x140A673A8 (_CmSetInterfaceClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInterfaceClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 (__fastcall *v5)(); // r8
  __int128 *v6; // rbx
  int v7; // r9d
  __int64 v8; // r9
  int v9; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  unsigned int InterfaceClassMappedProperty; // eax
  __int128 v17; // [rsp+50h] [rbp-18h] BYREF

  LODWORD(v5) = 0;
  LODWORD(v6) = 0;
  v17 = 0LL;
  v7 = a4 - 1;
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  if ( v14 == 1 )
                    InterfaceClassMappedProperty = CmSetInterfaceClassMappedProperty(
                                                     a1,
                                                     (_DWORD)a2,
                                                     *((_QWORD *)a5 + 2),
                                                     a5[6],
                                                     *((_QWORD *)a5 + 4),
                                                     a5[10]);
                  else
                    InterfaceClassMappedProperty = -1073741811;
                }
                else
                {
                  InterfaceClassMappedProperty = CmGetInterfaceClassMappedProperty(
                                                   a1,
                                                   (int)a2,
                                                   *(void **)a5,
                                                   *((_QWORD *)a5 + 1),
                                                   *((_QWORD *)a5 + 2),
                                                   *((_DWORD **)a5 + 3),
                                                   *((_QWORD *)a5 + 4),
                                                   a5[10],
                                                   *((_DWORD **)a5 + 6));
                }
              }
              else
              {
                InterfaceClassMappedProperty = CmGetInterfaceClassMappedPropertyLocales(
                                                 a1,
                                                 (_DWORD)a2,
                                                 0,
                                                 *((_QWORD *)a5 + 1),
                                                 *((_QWORD *)a5 + 2),
                                                 a5[6],
                                                 *((_QWORD *)a5 + 4));
              }
            }
            else
            {
              InterfaceClassMappedProperty = CmGetInterfaceClassMappedPropertyKeys(
                                               a1,
                                               (_DWORD)a2,
                                               *(_QWORD *)a5,
                                               0,
                                               *((_QWORD *)a5 + 3),
                                               a5[8],
                                               *((_QWORD *)a5 + 5));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *((_QWORD *)a5 + 1);
            }
            InterfaceClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             4,
                                             (_DWORD)v5,
                                             (_DWORD)v6,
                                             *((_QWORD *)a5 + 2),
                                             a5[6],
                                             *((_QWORD *)a5 + 4),
                                             a5[10] & 0xFFFF0000);
          }
        }
        else
        {
          InterfaceClassMappedProperty = CmDeleteInterfaceClass(a1, a2, *a5 & 0xFFFF0000);
        }
      }
      else
      {
        InterfaceClassMappedProperty = CmCreateInterfaceClass(
                                         a1,
                                         (_DWORD)a2,
                                         *a5,
                                         (int)a5 + 8,
                                         (__int64)(a5 + 4),
                                         a5[5] & 0xFFFF0000);
      }
    }
    else
    {
      InterfaceClassMappedProperty = CmOpenInterfaceClassRegKey(
                                       a1,
                                       (int)a2,
                                       0LL,
                                       v8,
                                       *a5,
                                       *((_BYTE *)a5 + 4),
                                       *((_QWORD *)a5 + 1),
                                       (__int64)(a5 + 4));
    }
  }
  else
  {
    InterfaceClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InterfaceClassMappedProperty);
}
