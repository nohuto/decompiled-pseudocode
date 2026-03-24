/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C01230A4
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0004FDC (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023D57C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C003819C (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006B6E8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C012313C (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebp
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  CWindowProp *v10; // rdi
  int v11; // esi
  CWindowProp *v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  v4 = a3;
  v6 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, (__int64 *)&v13)
    || (v6 = CWindowProp::CreateWindowProp<CoreWindowProp>(&v13), v6 < 0) )
  {
    v10 = v13;
  }
  else
  {
    v9 = a1;
    v10 = v13;
    if ( !(unsigned int)CWindowProp::SetProp(v13, v9) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v10)(v10);
      v10 = 0LL;
      v6 = -1073741790;
    }
  }
  if ( v6 >= 0 )
  {
    v11 = a2 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        *((_DWORD *)v10 + 4) = v4;
      }
      else
      {
        UserSetLastError(87LL, v7, v8);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v10 + 5) = v4;
    }
  }
  return (unsigned int)v6;
}
