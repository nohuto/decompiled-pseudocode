/*
 * XREFs of _PnpDispatchInstallerClass @ 0x14074D6F0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpMapCmStatusToDispatchStatus @ 0x140244BE4 (_PnpMapCmStatusToDispatchStatus.c)
 *     _CmOpenInstallerClassRegKey @ 0x1406C4ED8 (_CmOpenInstallerClassRegKey.c)
 *     _CmValidateInstallerClassName @ 0x1406C4F20 (_CmValidateInstallerClassName.c)
 *     _CmGetInstallerClassMappedProperty @ 0x14074D838 (_CmGetInstallerClassMappedProperty.c)
 *     _CmGetMatchingCommonClassList @ 0x1408241FC (_CmGetMatchingCommonClassList.c)
 *     _CmCreateInstallerClass @ 0x140A5E144 (_CmCreateInstallerClass.c)
 *     _CmDeleteInstallerClass @ 0x140A5FD64 (_CmDeleteInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyKeys @ 0x140A6601C (_CmGetInstallerClassMappedPropertyKeys.c)
 *     _CmGetInstallerClassMappedPropertyLocales @ 0x140A66320 (_CmGetInstallerClassMappedPropertyLocales.c)
 *     _CmSetInstallerClassMappedProperty @ 0x140A66C94 (_CmSetInstallerClassMappedProperty.c)
 */

__int64 __fastcall PnpDispatchInstallerClass(__int64 a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
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
  unsigned int InstallerClassMappedProperty; // eax
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
                    InstallerClassMappedProperty = CmSetInstallerClassMappedProperty(
                                                     a1,
                                                     (_DWORD)a2,
                                                     *(_QWORD *)(a5 + 16),
                                                     *(_DWORD *)(a5 + 24),
                                                     *(_QWORD *)(a5 + 32),
                                                     *(_DWORD *)(a5 + 40));
                  else
                    InstallerClassMappedProperty = -1073741811;
                }
                else
                {
                  InstallerClassMappedProperty = CmGetInstallerClassMappedProperty(
                                                   a1,
                                                   (_DWORD)a2,
                                                   *(_QWORD *)a5,
                                                   *(_QWORD *)(a5 + 8),
                                                   *(_QWORD *)(a5 + 16),
                                                   *(_QWORD *)(a5 + 24),
                                                   *(_QWORD *)(a5 + 32),
                                                   *(_DWORD *)(a5 + 40),
                                                   *(_QWORD *)(a5 + 48));
                }
              }
              else
              {
                InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyLocales(
                                                 a1,
                                                 (_DWORD)a2,
                                                 0,
                                                 *(_QWORD *)(a5 + 8),
                                                 *(_QWORD *)(a5 + 16),
                                                 *(_DWORD *)(a5 + 24),
                                                 *(_QWORD *)(a5 + 32));
              }
            }
            else
            {
              InstallerClassMappedProperty = CmGetInstallerClassMappedPropertyKeys(
                                               a1,
                                               (_DWORD)a2,
                                               *(_QWORD *)a5,
                                               0,
                                               *(_QWORD *)(a5 + 24),
                                               *(_DWORD *)(a5 + 32),
                                               *(_QWORD *)(a5 + 40));
            }
          }
          else
          {
            if ( *(_QWORD *)a5 )
            {
              *(_QWORD *)&v17 = *(_QWORD *)a5;
              v5 = PnpCmMatchCallbackRoutine;
              v6 = &v17;
              *((_QWORD *)&v17 + 1) = *(_QWORD *)(a5 + 8);
            }
            InstallerClassMappedProperty = CmGetMatchingCommonClassList(
                                             a1,
                                             2,
                                             (_DWORD)v5,
                                             (_DWORD)v6,
                                             *(_QWORD *)(a5 + 16),
                                             *(_DWORD *)(a5 + 24),
                                             *(_QWORD *)(a5 + 32),
                                             *(_DWORD *)(a5 + 40) & 0xFFFF0000);
          }
        }
        else
        {
          InstallerClassMappedProperty = CmDeleteInstallerClass(a1, a2, *(_DWORD *)a5 & 0xFFFF0000);
        }
      }
      else
      {
        InstallerClassMappedProperty = CmCreateInstallerClass(
                                         a1,
                                         (_DWORD)a2,
                                         *(_DWORD *)a5,
                                         (int)a5 + 8,
                                         a5 + 16,
                                         *(_DWORD *)(a5 + 20) & 0xFFFF0000);
      }
    }
    else
    {
      InstallerClassMappedProperty = CmOpenInstallerClassRegKey(
                                       a1,
                                       (int)a2,
                                       0LL,
                                       v8,
                                       *(_DWORD *)a5,
                                       *(_BYTE *)(a5 + 4),
                                       *(_QWORD *)(a5 + 8),
                                       a5 + 16);
    }
  }
  else
  {
    InstallerClassMappedProperty = CmValidateInstallerClassName(a1, a2);
  }
  return PnpMapCmStatusToDispatchStatus(InstallerClassMappedProperty);
}
