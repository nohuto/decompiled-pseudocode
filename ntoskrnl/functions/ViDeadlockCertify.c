__int64 __fastcall ViDeadlockCertify(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // r9
  int *v4; // rdx
  int v5; // ebx
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // r8d
  __int64 v9; // r10
  _QWORD *v10; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r10

  if ( VfWin32kDllBase
    && VfWin32kDllBase <= a1
    && VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage > a1
    && *(_BYTE *)(*(_QWORD *)(a2 + 64) + 48LL) )
  {
    return 0LL;
  }
  LODWORD(v3) = *((_DWORD *)ViDeadlockGlobals + 8216);
  if ( (unsigned int)v3 < 3 )
    goto LABEL_28;
  if ( (v4 = *(int **)(*((_QWORD *)ViDeadlockGlobals + 4110) + 56LL),
        v5 = **(_DWORD **)(*((_QWORD *)ViDeadlockGlobals + 4109) + 56LL),
        v5 == 5)
    && (v6 = *v4, *v4 == 6)
    || (v6 = *v4, v7 = v6, v6 == 5) && v5 == 6 )
  {
    if ( VfTcpIpDllBase
      && VfTcpIpDllBase <= a1
      && VfTcpIpDllBase + (unsigned __int64)(unsigned int)VfTcpIpSizeOfImage > a1 )
    {
      return 0LL;
    }
    if ( VfTdxDllBase && VfTdxDllBase <= a1 && VfTdxDllBase + (unsigned __int64)(unsigned int)VfTdxSizeOfImage > a1 )
      return 0LL;
    v7 = v6;
    if ( VfMrxsmbDllBase )
    {
      if ( VfMrxsmbDllBase <= a1 && VfMrxsmbDllBase + (unsigned __int64)(unsigned int)VfMrxsmbSizeOfImage > a1 )
        return 0LL;
    }
  }
  if ( v5 != 1 || v7 != 1 )
    goto LABEL_28;
  if ( VfTmDllBase && VfTmDllBase <= a1 && VfTmDllBase + (unsigned __int64)(unsigned int)VfTmSizeOfImage > a1 )
    return 0LL;
  if ( VfKsDllBase && VfKsDllBase <= a1 )
  {
    if ( VfKsDllBase + (unsigned __int64)(unsigned int)VfKsSizeOfImage <= a1 )
    {
      v8 = 1;
LABEL_29:
      while ( 1 )
      {
        v9 = *((_QWORD *)ViDeadlockGlobals + v8 + 4108);
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)ViDeadlockGlobals + v8 + 4109) + 56LL) + 8LL) == *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL)
          && (*(_DWORD *)(v9 + 72) & 2) != 0 )
        {
          break;
        }
        if ( ++v8 >= (unsigned int)v3 )
        {
          while ( 1 )
          {
            v3 = (unsigned int)(v3 - 1);
            v10 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v3 + 4109);
            if ( v10 )
              break;
LABEL_39:
            if ( (unsigned int)v3 <= 1 )
              return 1LL;
          }
          while ( 1 )
          {
            LODWORD(v11) = v3 - 1;
            if ( (_DWORD)v3 != 1 )
              break;
LABEL_38:
            v10 = (_QWORD *)*v10;
            if ( !v10 )
              goto LABEL_39;
          }
          while ( 1 )
          {
            v11 = (unsigned int)(v11 - 1);
            v12 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v11 + 4109);
            if ( v12 )
              break;
LABEL_37:
            if ( !(_DWORD)v11 )
              goto LABEL_38;
          }
          while ( *(_QWORD *)(v12[7] + 8LL) != *(_QWORD *)(v10[7] + 8LL) )
          {
            v12 = (_QWORD *)*v12;
            if ( !v12 )
              goto LABEL_37;
          }
          ++*((_DWORD *)ViDeadlockGlobals + 8207);
          return 0LL;
        }
      }
    }
    return 0LL;
  }
LABEL_28:
  v8 = 1;
  if ( (unsigned int)v3 > 1 )
    goto LABEL_29;
  return 1LL;
}
