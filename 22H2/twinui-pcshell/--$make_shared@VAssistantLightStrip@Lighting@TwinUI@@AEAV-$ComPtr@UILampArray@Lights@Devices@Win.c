/*
 * XREFs of ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x1804BF7AC
 * Callers:
 *     ?GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@Z @ 0x1804BF868 (-GetAssistantLight@AssistantLightFactory@Lighting@TwinUI@@SAJV-$ComPtr@UILampArray@Lights@Device.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x1804BEDD0 (--$-0AEAV-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV-$vector@HV-$allocator.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<TwinUI::Lighting::AssistantLightStrip,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &,std::vector<int> &,std::vector<int> &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  v10 = operator new(0x68uLL);
  v8 = std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>(
         (__int64)v10,
         a2,
         a3,
         a4);
  *a1 = v8 + 16;
  a1[1] = v8;
  return a1;
}
