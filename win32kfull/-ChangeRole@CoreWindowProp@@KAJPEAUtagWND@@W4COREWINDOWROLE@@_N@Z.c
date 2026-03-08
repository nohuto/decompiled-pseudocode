/*
 * XREFs of ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0222DF4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C022315C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022325C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C002D818 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C0222C48 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::ChangeRole(__int64 a1, int a2, unsigned __int8 a3)
{
  int v4; // ebp
  int Window; // ebx
  unsigned __int64 v7; // rdx
  CWindowProp *v8; // rdi
  int v9; // esi
  CWindowProp *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a3;
  Window = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, (__int64 *)&v11)
    || (Window = CWindowProp::CreateWindowProp<CoreWindowProp>((__int64 *)&v11), Window < 0) )
  {
    v8 = v11;
  }
  else
  {
    v7 = a1;
    v8 = v11;
    if ( !(unsigned int)CWindowProp::SetProp(v11, v7) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
      return (unsigned int)-1073741790;
    }
  }
  if ( Window >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *((_DWORD *)v8 + 6) = v4;
      }
      else
      {
        UserSetLastError(87);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      *((_DWORD *)v8 + 7) = v4;
    }
  }
  return (unsigned int)Window;
}
