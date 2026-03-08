/*
 * XREFs of ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801FE508
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802B5050 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct ID3D11VertexShader *__fastcall CD3DDevice::GetVertexShaderNoRef(CD3DDevice *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rcx
  _DWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *((int *)this + 382);
  if ( (int)v4 <= 0 )
    goto LABEL_5;
  v5 = (_DWORD *)*((_QWORD *)this + 189);
  v6 = 0LL;
  while ( *v5 != (_DWORD)a2 )
  {
    ++v3;
    ++v6;
    ++v5;
    if ( v6 >= v4 )
      goto LABEL_5;
  }
  if ( v3 == -1 )
  {
LABEL_5:
    v9 = 0LL;
    v7 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 190) + 8LL * v3);
    v9 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64, _DWORD *, __int64))(*(_QWORD *)v7 + 8LL))(v7, a2, v5, v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v9);
  return (struct ID3D11VertexShader *)v7;
}
