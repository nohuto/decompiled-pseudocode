/*
 * XREFs of ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180067AE0
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x1800399E0 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180033E58 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180067660 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::SetLastError(
        wil::details_abi::ThreadLocalData *this,
        const struct wil::FailureInfo *a2)
{
  _WORD *v2; // r8
  int v4; // edi
  _WORD *v6; // rax
  _WORD *v7; // rax
  _WORD *v8; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // r8
  unsigned __int16 v11; // dx

  v2 = (_WORD *)*((_QWORD *)this + 3);
  v4 = *((_DWORD *)this + 4);
  if ( v2 )
    goto LABEL_8;
  if ( v4 )
  {
    v6 = wil::details::ProcessHeapAlloc(8u, 0x190uLL);
    *((_QWORD *)this + 3) = v6;
    v2 = v6;
    if ( v6 )
    {
      v7 = v6 + 200;
      *((_DWORD *)this + 8) = 5;
      if ( v2 != v7 )
      {
        do
        {
          *v2 = 80;
          v2 += 40;
        }
        while ( v2 != v7 );
        v2 = (_WORD *)*((_QWORD *)this + 3);
      }
      if ( v2 )
      {
LABEL_8:
        v8 = v2;
        if ( !v4 || (v9 = &v2[40 * *((unsigned __int16 *)this + 16)], v2 == (_WORD *)v9) )
        {
LABEL_15:
          v11 = ((unsigned int)*((unsigned __int16 *)this + 17) + 1) % *((unsigned __int16 *)this + 16);
          *((_WORD *)this + 17) = v11;
          wil::details_abi::ThreadLocalFailureInfo::Set(
            (wil::details_abi::ThreadLocalFailureInfo *)&v8[40 * v11],
            a2,
            _InterlockedIncrement(*((volatile signed __int32 **)this + 1)));
        }
        else
        {
          v10 = v2 + 4;
          while ( *(v10 - 1) <= *((_DWORD *)this + 4) || *v10 != *((_DWORD *)a2 + 1) )
          {
            v10 += 20;
            if ( v10 - 2 == v9 )
            {
              v8 = (_WORD *)*((_QWORD *)this + 3);
              goto LABEL_15;
            }
          }
        }
      }
    }
  }
}
