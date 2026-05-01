/*
 * XREFs of ?close_reset@?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x18044D36C
 * Callers:
 *     ??R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z @ 0x1804DCBDC (--R_lambda_f514b7d7a4bf1295c9808fb12a890baa_@@QEBAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(
        HLOCAL hMem)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  LocalFree(hMem);
  SetLastError(LastError);
}
